use checkType;

config param errorCase = 0;

proc f(s: string) {  checkType(s.type); }
proc fi(in s: string) { checkType(s.type); }
proc fo(out s: string) { checkType(s.type); }
proc fio(inout s: string) { checkType(s.type); }
proc fr(ref s: string) { checkType(s.type); }

f("hi");
fi("hi");
if errorCase == 1 {
  fo("hi"); 
  fio("hi");
  fr("hi");
}

proc g(s) {  checkType(s.type); }
proc gi(in s) { checkType(s.type); }
proc go(out s) { checkType(s.type); }
proc gio(inout s) { checkType(s.type); }
proc gr(ref s) { checkType(s.type); }

g("hi");
gi("hi");
if errorCase == 1 {
  go("hi");
  gio("hi");
  gr("hi");
}

var s: c_string = "hi";
s += s;
f(s);
fi(s);
if errorCase == 2 then
   fo(s);

if errorCase == 3 then
   fio(s);

if errorCase == 4 then
   fr(s);
