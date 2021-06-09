program battel;

var
  surface , i , n , star , parts : LongInt;
  taille :array [0..10000,0..1] of integer;

begin
  readln(n);
  for i:=0 to n-1 do
        readln(taille[i][0], taille[i][1]);

  star := taille[0][0] * taille[0][1];
  parts := 0;
  surface := 0;
  
  if taille[0][0] >= taille[0][1] then
  begin
    for i:=1 to n-1 do
    begin
        parts :=parts + taille[0][1] * taille[i][0];
        surface :=surface + taille[i][0] * taille[i][1];
    end;
  end
  else
  begin
    for i:=1 to n-1 do
    begin
        parts :=parts + taille[0][0] * taille[i][1];
        surface :=surface + taille[i][0] * taille[i][1];
    end;
  end;

writeln(surface - parts + star);
  readln();

end.