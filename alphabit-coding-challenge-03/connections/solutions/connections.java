import java.lang.Math;
import java.util.Scanner;

public class Connection {

	public static int Soultion(int A) {
		return (int) ((1+(Math.sqrt(1+8*A)))/2);

	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);		
		int D1;
		D1 = sc.nextInt();
		
		System.out.print(Soultion(D1));
	}

}
