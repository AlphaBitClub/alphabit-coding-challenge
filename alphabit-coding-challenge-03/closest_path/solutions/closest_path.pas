program closestpath;

var
  strin : string ;
  steps :array [1..2] of integer = (0,0) ;
  i : integer ;

begin
  readln(strin);
  for i:=1 to length(strin) do
  begin
    case strin[i] of
    'Z' : steps[1] :=steps[1] +1;
    'S' : steps[1] :=steps[1] -1;
    'Q' : steps[2] :=steps[2] +1;
    'D' : steps[2] :=steps[2] -1;
    end;
  end;
  if (steps[1] >= 0)AND(steps[2] >= 0)then
  writeln(steps[1],' ',0,' ',steps[2],' ',0)
  else if (steps[1] < 0)AND(steps[2] >= 0)then
  writeln(0,' ',(-1*steps[1]),' ',steps[2],' ',0)
  else if (steps[1] >= 0)AND(steps[2] < 0)then
  writeln(steps[1],' ',0,' ',0,' ',(-1*steps[2]))
  else
  writeln(0,' ',-steps[1],' ',0,' ',-steps[1]);

  readln();
end.