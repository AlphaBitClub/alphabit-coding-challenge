import java.util.Arrays;
import java.util.Scanner;

public class Table {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);	
		int l, k;
		int arrin[] = new int[999], arrout[] = new int[999];

	    //input*************************************

	    l = sc.nextInt();
	    k = sc.nextInt();
	    int tmp[] = new int[k];
	    for (int i = 0; i < l - 1; i++)
	    {
	       arrin[i] = sc.nextInt();;
	    }
	    arrin[l - 1] = sc.nextInt();;

	    // traitment*************************************

	    int j = 0;
	    while (j < l)
	    {
	        for (int i = 0; i < k; i++)
	        {
	            tmp[i] = arrin[j + i];
	        }
	        Arrays.sort(tmp);
	        for (int i = 0; i < k; i++)
	        {
	            arrout[j + i] = tmp[i];
	        }
	        j += k;
	    }

	    //output*************************************

	    for (int i = 0; i < l; i++)
	    {
	    	System.out.print( arrout[i]+" " );
	    }

	}

}