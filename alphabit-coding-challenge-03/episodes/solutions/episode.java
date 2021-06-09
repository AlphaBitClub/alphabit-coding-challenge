import java.util.Scanner;

public class C {
	public static int CompareDates(int D1,int M1,int A1,int D2,int M2,int A2){
		if(A1 > A2 ) return -1;
		else if(A1 == A2 && M1 > M2) return -1;
		else if(A1 == A2 && M1 == M2 && D1 > D2 ) return -1;
		else if (A1 == A2 && M1 == M2 && D1 == D2 ) return 0;
		else return 1;
	}
	static int checkLeap(int y)
    {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
            return 1;
        else
            return 0;
    }
    public static int dayofweek(int dd,int mm,int yyyy)
    { 
        int flag_for_leap = checkLeap(yyyy);
 
    
        int day[] = { 0,1,2,3,4,5,6 };
        int m_no[] = { 0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5 }; 
        int j;
        if ((yyyy / 100) % 2 == 0) {
            if ((yyyy / 100) % 4 == 0)
                j = 6;
            else
                j = 2;
        }
        else {
            if (((yyyy / 100) - 1) % 4 == 0)
                j = 4;
            else
                j = 0;
        }
 
        /*THE FINAL FORMULA*/
        int total = (yyyy % 100) + ((yyyy % 100) / 4) + dd
                    + m_no[mm - 1] + j;
        if (flag_for_leap == 1) {
            if ((total % 7) > 0)
                return(day[(total % 7) - 1]);
            else
            	return(day[6]);
        }
        else
        	return(day[(total % 7)]);
    }
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);		
		int D1,M1,A1;
		D1 = sc.nextInt();
		M1 = sc.nextInt();
		A1 = sc.nextInt();
		int D2,M2,A2;
		D2 = sc.nextInt();
		M2 = sc.nextInt();
		A2 = sc.nextInt();

		if(CompareDates(D2,M2,A2,9,9,2009)==0) System.out.print("1");
		else if(CompareDates(D2,M2,A2,9,9,2009)==1) System.out.print("0");
		else {
			int Ret =0;
			int Today = 0;
		    if(CompareDates(D1,M1,A1,9,9,2009)==1){
		        D1=9;
		        M1=9;
		        A1=2009;
		        Ret=1;
		    }
			Today = dayofweek(D1,M1,A1);
			while(CompareDates(D1,M1,A1,D2,M2,A2)!= -1){
				if(CompareDates(D1,M1,A1,9,9,2009)==0)Ret++;
				if(M1 == 1 && Today == 5 ) Ret++;
				if(M1 == 1 && Today == 3 )  Ret++;
				if(M1 == 4 && Today == 0 ) Ret++;
				if(M1 == 4 && Today == 1 ) Ret++;
				if(M1 == 4 && Today == 4 ) Ret++;
				if(M1 == 12 && Today == 5 ) Ret++;
				D1++;
				if(D1==32) {
					D1=1;
					M1++;
					if(M1==13){M1=1; A1++;}
				}
				Today++;
				if(Today==7) Today=0;
			}
			System.out.print(Ret);
		} 
	}
}