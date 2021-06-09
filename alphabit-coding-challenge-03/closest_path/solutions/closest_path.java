import java.util.Scanner;

public class ClosePath {

	
	public static void Soultion(String A){
		int Len = A.length();
		int Step[] = {0,0};
		for (int i=0;i<Len;i++){
			if(A.charAt(i) =='Z') Step[0]+=1;
			else if(A.charAt(i) =='S') Step[0]-=1;
			else if(A.charAt(i) =='Q') Step[1]+=1;
			else Step[1] -=1;
		}
		if(Step[0] > 0)
		System.out.print( Step[0]+ " " + "0 ");
		else System.out.print( "0 " + -Step[0] + " ");
		if(Step[1] > 0)
			System.out.print(  Step[1] + " " + "0 ");
		else System.out.print( "0 " + -Step[1] +" ");
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);		
		String N= sc.nextLine();
		Soultion(N);

	}

}
