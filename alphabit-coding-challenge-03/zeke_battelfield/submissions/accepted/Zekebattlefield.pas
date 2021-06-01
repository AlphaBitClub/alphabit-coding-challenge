program Zekebattlefield;
type
  arrayinteger = array[0..101] of integer ;

function sort (a : arrayinteger ; n : integer ) : arrayinteger ;
var
  x,i,j : integer ;
begin
  for i:=0 to n-1 do
  for j:=i+1 to n do
  if a[i]>a[j] then
  begin
  x:=a[i];
  a[i]:=a[j];
  a[j]:=x;
  end;
  sort:=a;
end;
var
  n,x,y,tmp,d,i,j : integer ;
  xVct : arrayinteger ;
  yVct : arrayinteger ;
  output : array[0..5] of integer = (0,0,0,0,0,0);

begin
  readln(n);
  for i:=0 to n-1 do
  begin
    readln(x,y);
    xVct[i] := x;
    yVct[i] := y;
  end;

  xVct :=sort(xVct,n);
  yVct :=sort(yVct,n);

  for i:=0 to n-1 do
  begin
  for j:=0 to n-1 do
  begin
     tmp := (xVct[i+1]-xVct[i]-1)*(yVct[j+1]-yVct[j]-1);
     if (((tmp mod 16)= 0)AND((xVct[i+1]-xVct[i]-1) = (yVct[j+1]-yVct[j]-1))) then
     begin
     d:=tmp div 16;
     output [3] := output [3] + d;
     end
     else
     begin
     if (((tmp mod 16)= 0)AND((xVct[i+1]-xVct[i]-1) <> (yVct[j+1]-yVct[j]-1))) then
     begin
        d:=tmp div 16;
        output [4] := output [4] + d;
     end
     else
     begin
        if (tmp mod 12)= 0 then
        begin
           d:=tmp div 12;
           output [2] := output [2] + d;
        end
        else
        begin
           if (tmp mod 9)= 0 then
           begin
           d:=tmp div 9;
           output [1] := output [1] + d;
           end
           else
        begin
           if (tmp mod 4)= 0 then
           begin
           d:=tmp div 4;
           output [0] := output [0] + d;
           end
           else
           begin
              output [5] := output [5] + 1;
           end
        end
        end
     end
     end
  end
  end;

  for i:=0 to 5 do
  writeln(output[i]);

  readln();

end.

