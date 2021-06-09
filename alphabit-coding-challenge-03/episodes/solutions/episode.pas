program EpisodesProblem;

function CompareDates(D1,M1,A1,D2,M2,A2 : integer) : integer ;
begin
  if A1 > A2 then
     CompareDates := -1
  else
  if(A1 = A2) AND (M1 > M2) then
        CompareDates := -1
  else
  if(A1 = A2) AND (M1 = M2) AND (D1 > D2 ) then
        CompareDates := -1
  else
  if (A1 = A2) AND (M1 = M2) AND (D1 = D2 ) then
     CompareDates := 0
  else
      CompareDates := 1;
end;

function checkLeap(y : integer) : integer;
begin
     if (((y mod 4 = 0) and (y mod 100 <> 0)) or (y mod 400 = 0))then
        checkLeap:= 1
     else
        checkLeap:= 0;
end;

function dayofweek(dd,mm,yyyy : integer) : integer;
var
  m_no : array [0..11]of integer = (0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5);
  day : array [0..6]of integer = (0,1,2,3,4,5,6);
  flag_for_leap , j , total : integer ;
begin
     flag_for_leap := checkLeap(yyyy);
     if Trunc(yyyy / 100) mod 2 = 0 then
     begin
          if Trunc(yyyy / 100) mod 4 = 0 then
          j := 6
          else
          j := 2;
     end
     else
     begin
        if ((Trunc(yyyy / 100) - 1) mod 4 = 0)then
           j := 4
        else
            j := 0;
     end;

      total := Trunc(yyyy mod 100) + Trunc((yyyy mod 100) / 4) + dd
                    + m_no[mm - 1] + j;
      if (flag_for_leap = 1) then
      begin
           if ((total mod 7) > 0)then
                dayofweek := day[(total mod 7) - 1]
           else
            	dayofweek := day[6];
      end
      else
      begin
         dayofweek := day[(total mod 7)];
      end;
end;

var
  D1,M1,A1,D2,M2,A2 : integer;
  Ret: integer = 0;
  Today : integer = 0;

begin
  readln(D1,M1,A1,D2,M2,A2);

  if(CompareDates(D2,M2,A2,9,9,2009)=0) then writeln(1)
else if(CompareDates(D2,M2,A2,9,9,2009)=1) then writeln(0)
else
begin
    if(D1=9) and (M1=9) and (A1=2009)then
       begin
        Ret:=1;
        end ;
         Today := dayofweek(D1,M1,A1);
         while(CompareDates(D1,M1,A1,D2,M2,A2)<> -1) do
                begin
		if(M1 = 1) AND (Today = 5 ) then Ret := Ret+1;
		if(M1 = 1) AND (Today = 3 ) then Ret:= Ret+1;
		if(M1 = 4) AND (Today = 0 ) then Ret:= Ret+1;
		if(M1 = 4) AND (Today = 1 ) then Ret:= Ret+1;
		if(M1 = 4) AND (Today = 4 ) then Ret:= Ret+1;
		if(M1 = 12) AND (Today = 5 ) then Ret:= Ret+1 ;
	        D1 := D1+1 ;
                if(D1=32)then
                   begin
			D1:=1;
			M1:= M1+1;
			if(M1=13)then
                        begin
                        M1:=1;
                        A1:= A1+1 ;
                        end;
                   end;
                Today:=Today+1;
		if(Today=7) then Today:=0;
                end;
                writeln (Ret);
end;

readln();

end.