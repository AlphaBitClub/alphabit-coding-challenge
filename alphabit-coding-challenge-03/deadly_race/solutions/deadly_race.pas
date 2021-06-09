program Race;

var
  N : double ;
  Ret : integer = 2;

begin
  readln(N);
  while true do
     begin
     if N=3 then
       break;
       Ret := Ret*2;
       N := N/(Ret mod 10);
     end;
  writeln(Ret);
  readln;
end.