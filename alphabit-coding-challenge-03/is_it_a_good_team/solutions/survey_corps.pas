program surveycorps;

var
  m : string ;
  l ,i ,j , err: integer ;
  res :array [0..10000] of integer ;
begin
  readln(m);
  l := length(m);
  j:=0;
  for i :=0 to l do
  begin
    if m[i]='l' then
       begin
       res[j] := i-1;
       j := j+1;
       end;
  end;
  err := res[0];
   for i :=1 to j do
   begin
     err := err xor res[i];
   end;

   write(err);
   readln();
end.

