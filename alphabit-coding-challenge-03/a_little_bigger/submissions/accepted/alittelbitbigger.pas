program alittelbitbigger;

var
  input : string ;
  flag ,i ,n : integer;
  tmp : char;

begin
  readln(input);
  n:=length(input);

  flag := 0;

  for i:=1 to n-1 do
  begin
      if (input[n-i+1]>input[n-i]) then
      begin
         tmp := input[n-i+1];
         input[n-i+1] := input[n-i];
         input[n-i] := tmp;
         flag := 1;
         break;
      end;
  end;

  if (flag =1) then
  begin
       for i := 1 to n do
           write(input[i]);
  end;
  if (flag = 0)then
     write('kinda impossible');

  readln();

end.