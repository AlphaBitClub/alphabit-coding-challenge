import java.util.Scanner;

public class Survey {

	public static void main(String[] args) {
	 	String m ;
		int res[] = new int[10000000];
		Scanner sc = new Scanner(System.in);	

		//char l = "l";
		m = sc.nextLine();
	        // traitment*************************************


		int l = m.length();
	    int j =0;
		for (int i = 0; i < l; i++) {
			char K = m.charAt(i);
			if (K=='l') {
	            res[j] = i;
	            j++;
			}
		}

	    int err = res[0];
		for (int i = 1; i < j+1; i++) {
			err ^= res[i];
		}

	    //output*************************************

		 System.out.print( err ) ;


	}

}
