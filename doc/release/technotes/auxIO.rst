.. _readme-auxIO:

.. default-domain:: chpl

=====================
Auxiliary I/O Systems
=====================

This README describes Chapel support for Auxiliary I/O(AIO) systems. It also
provides instructions on how to set Chapel up to support multiple Auxiliary I/O
systems simultaneously.


Dependencies
------------

Each AIO system is typically described in the support module for it.
See:

 * :mod:`HDFS`
 * :mod:`Curl`
   
for specific instructions on how to install and use those features.

The AIO system depends upon three environment variables:

    ``CHPL_AUX_FILESYS``
    ``CHPL_AUXIO_INCLUDE``
    ``CHPL_AUXIO_LIBS``

In the following sections, we will explain what they should be set to, and give
the general idea of what they do.


CHPL_AUXIO_INCLUDE & CHPL_AUXIO_LIBS
------------------------------------

These paths are for the extra libraries that will be linked in with the runtime
when it is compiled. For instance, if I installed libcurl, and had it install in
``~/include`` and ``~/lib`` you would set them to be:


.. code-block:: sh

    export CHPL_AUXIO_LIBS="-L~/include"
    export CHPL_AUXIO_INCLUDE="-I~/lib"

In general, you want it so that if you had a .c file that used the libraries
that you wish to compile Chapel with, all you would need to do to compile this
file would be:

``cc $CHPL_AUXIO_LIBS $CHPL_AUXIO_INCLUDE <any libraries> <the .c file>``

where <any libraries> might be ``-lcurl``, ``-lhdfs``, ``-ljvm`` etc.

.. note::

  It is not necessary to pass these library flags, or library/include paths
  to the Chapel compiler invocations (chpl) as the values in ``CHPL_AUXIO_LIBS``
  and ``CHPL_AUXIO_INCLUDE`` will be used there as well as in building the
  Chapel runtime

CHPL_AUX_FILESYS
----------------

This is a space delimited string detailing what AIO systems we wish to compile
Chapel with (and use). For example if we wanted to enable Curl and HDFS support
simultaneously we would set:

    ``CHPL_AUX_FILESYS="hdfs curl"``

Assuming that you have correctly defined ``CHPL_AUXIO_INCLUDES`` and ``CHPL_AUXIO_LIBS``
as detailed above, and have the correct libraries installed.

If you only have one AIO system that you wish to use, you may simply set
``CHPL_AUX_FILESYS=<system>``. For example, if we only wanted HDFS support, we would
set:

    ``CHPL_AUX_FILESYS=hdfs``


I/O Systems Supported
---------------------

Currently, the I/O systems supported are:

 - Lustre
 - :mod:`HDFS`
 - :mod:`Curl`


Parallel and Distributed I/O Features
-------------------------------------

We support two functions for Parallel and Distributed file systems (these also
work on "standard" file systems as well).

``file.getchunk(start:int(64), end:int(64)):(int(64), int(64))``

 - This returns the first logical *chunk* of the file that is inside this
   section. If no *chunk* can be found inside this region, (0,0) is returned. If
   no arguments are provided, we return the start and end of the first logical
   chunk for this file.

     - On Lustre, this returns the first stripe for the file that is inside this region.

     - On HDFS, this returns the first block for the file that is inside this
       region.

     - On local file systems, it returns the first *optimal transfer block*
       (from fstatfs) inside this section of the file.

``file.localesForRegion(start:int(64), end:int(64)):domain(locale)``

 - This returns the *best locales* for a given chunk of the file. If no
   individual or set of locales are *best* (i.e., there is some sort of data
   affinity that we can exploit), we return all locales.

     - On Lustre, no locale are *best*, so we return all locales

     - On HDFS, we return the block owners for that specific block

     - On local file systems, we return all locales, since no individual
       locale is best.
