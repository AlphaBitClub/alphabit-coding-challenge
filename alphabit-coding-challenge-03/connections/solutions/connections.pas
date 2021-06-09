program Connection;

var
  c : real;
  o : integer ;
begin
  readln(c);
  o := Trunc(1+Sqrt(1+8*c)/2) ;
  writeln(o);
  readln();
end.