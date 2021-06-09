program testtri;

function distance (a,c,b,d : double):double;
begin
  distance := Sqrt((b-a)*(b-a)+(d-c)*(d-c));
end;

var
  fx, fy, sx, sy, tx, ty, ab, ac, bc : double;

begin
  readln(fx, fy, sx, sy, tx, ty);

  ab := distance(fx, fy, sx, sy);
  ac := distance(fx, fy, tx, ty);
  bc := distance(sx, sy, tx, ty);

  if (bc*bc = ab*ab+ac*ac) or (ab*ab = ac*ac+bc*bc) or (ac*ac = ab*ab+bc*bc) then
     writeln('True')
  else
     writeln('False');

readln();
end.