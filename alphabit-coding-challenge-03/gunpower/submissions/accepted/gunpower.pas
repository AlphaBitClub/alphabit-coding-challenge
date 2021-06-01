program gunpower;

type
  arrayinteger = array [1..10000] of integer;

function sort (a : arrayinteger ; n : integer ) : arrayinteger ;
var
  x,i,j : integer ;
begin
  for i:=1 to n do
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
  n,b,count,i :integer;
  tab : array [1..10000]of integer ;

begin
  readln(n,b);
  for i:=1 to n do
      read(tab[i]);

  tab := sort(tab,n);

  count := 0;
  for i:=1 to n do
  begin
    if b>=tab[i] then
    begin
      b := b- tab[i];
      count := count +1;
    end;
  end;

  writeln(count);
  readln();

end.