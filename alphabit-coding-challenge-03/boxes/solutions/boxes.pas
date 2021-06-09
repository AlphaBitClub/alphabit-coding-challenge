program challengeboxe;

type
  integerarray = array [1..1000]of integer;
  chararray = array [1..1000] of char;

function sort (a : integerarray; n: integer): integerarray;
var
  i,j,x : integer;
begin
  for i:=1 to n-1 do
  for j:=i+1 to n do
  if(a[i]>a[j])then
  begin
    x:=a[i];
    a[i]:=a[j];
    a[j]:=x;
  end;

  sort := a;
end;

var
  boxes : string ;
  guns : integerarray ;
  r : integerarray ;
  max,min,i,n,k,j : integer;

begin
  readln(n);

  for i:=1 to  n-1 do
  read(guns[i]);
  readln(guns[n]);


  readln(boxes);
  k:=length(boxes);

  guns := sort(guns,n);

  min:= 1;
  max:= n;
  j:=1;
    
  for i:= 1 to k do
  begin
    if boxes[i]=' ' then
    j:=j+1;
    if boxes[i]='>' then
    begin
    r[j]:= guns[max];
    max:=max-1;
    end
    else if boxes[i]='<' then
    begin
    r[j]:=guns[min];
    min:=min+1;
    end;
   
  end;

  r[n]:=guns[max];

  for i:=1 to  n do
  write (r[i],' ');

  readln();

end.