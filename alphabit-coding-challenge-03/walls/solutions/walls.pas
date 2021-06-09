program walls;

var
  n,m,id,d,e,t,a,wid,i : integer ;
  wallarr : array[0..101,0..2] of integer ;
  wavearr : array[0..101,0..2] of integer ;
  flag : integer = 0 ;

begin
  readln(n,m);
  for i:=0 to n-1 do
  begin
    readln(id,d,e);
    wallarr[id-1,0]:= d;
    wallarr[id-1,1]:= e;
  end;
  for i:=0 to m-1 do
  begin
    readln(t,a);
    wavearr[i,0]:= t;
    wavearr[i,1]:= a;
  end;

  id := n-1;
  wid := 0;
  a :=wavearr[wid,1];

  for i:=0 to n do
    wallarr[i,0] := wallarr[i,0] + (wallarr[i,1]*wavearr[0,0]);

  while ((wid<m)AND(flag = 0)) do
  begin
    if(wallarr[id,0]>=a) then
    begin
      for i :=0 to n do
      wallarr[i,0] := wallarr[i,0] + wallarr[i,1];
      wid := wid+1;
      if wid<m then
      a := a+wavearr[wid,1];
    end
    else
    begin
       if (id = 0)then
       begin
         flag := 1;
       end
       else
       begin
          id := id-1;
          for i :=0 to n do
          wallarr[i,0] := wallarr[i,0] + wallarr[i,1] ;
       end;
    end;
  end;

  if (flag = 1) then
  writeln('humanity in danger ')
  else
  writeln(id+1);
  readln();

end.