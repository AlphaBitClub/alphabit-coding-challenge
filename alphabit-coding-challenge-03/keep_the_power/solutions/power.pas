program power;

Uses math;

function solution(num1,num2 : real): int64;
begin
  solution := Ceil(Ln(num2)/Ln(num1));
end;
var
  num1 , num2 : real ;
begin
   readln(num1,num2);
   writeln(solution(num1,num2));
   readln();
end.