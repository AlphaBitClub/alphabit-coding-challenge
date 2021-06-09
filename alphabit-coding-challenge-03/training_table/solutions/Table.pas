program table;

var
  n, k, i, j, p, min ,t: integer ;
  tab : array [1..10000] of integer ;

begin
  read(n);
  read(k);
  for i:=1 to n do
  read (tab[i]);

  t := Trunc(n/k);
  for i:=0 to t-1 do
  for j:=1 to(k-1) do
  for p:=j to k do
  if tab[p+i*k] < tab[j+i*k] then
  begin
    min := tab[j+i*k] ;
    tab[j+i*k] := tab[p+i*k] ;
    tab[p+i*k] := min ;
  end;

  for i:=1 to n do
  write(tab[i] , '   ');

  readln();
end.
