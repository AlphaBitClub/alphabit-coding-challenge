import java.util.Scanner;

public class Race {

	public static void main(String[] args) {
		 int N;
			Scanner sc = new Scanner(System.in);		

		  N = sc.nextInt();;
		  int Ret = 2;
		  while(true){
		  if(N==3) break;  
		    Ret*=2;
		    N/=Ret%10;
		  }
		  System.out.print(Ret);
	}

}