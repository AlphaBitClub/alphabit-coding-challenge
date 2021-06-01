import java.util.Scanner;

public class Death {

	
	
	public static float dest (float fx,float fy ,float sx ,float sy ){
	    return (float) Math.sqrt( ((fx-sx)*(fx-sx))+((fy-sy)*(fy-sy)) );
	}
	public static void main(String[] args) {
		float  fx, sx, tx, fy, sy, ty;
		Scanner sc = new Scanner(System.in);	

	    //input*************************************

	    fx =sc.nextInt();
	    fy= sc.nextInt();
	    sx  = sc.nextInt();
	    sy = sc.nextInt();
		tx = sc.nextInt();
		ty  = sc.nextInt();



	    // traitment*************************************
	int ab,ac,bc;
	   ab = (int) dest(fx, fy, sx, sy);

		ac = (int) dest(fx, fy, tx, ty);

		bc = (int) dest(sx, sy, tx, ty);



	    //output*************************************

	   if (((bc*bc == (ab*ab+ac*ac)) || (ab*ab ==( ac*ac+bc*bc))) || (ac*ac == (ab*ab+bc*bc))) {
		   System.out.print(  "True" );
		} else {
			System.out.print( "False" ) ;
		}



	}

}
