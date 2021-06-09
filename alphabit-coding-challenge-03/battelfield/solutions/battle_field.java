import java.util.Scanner;

public class Battle {

	public static void main(String[] args) {
		  int n, i;
		    int surface;
		    int taille[][] = new int[999][2];
			Scanner sc = new Scanner(System.in);	

		    //input*************************************

		   n=sc.nextInt();
		    for (i = 0; i < n; i++)
		    {
		     taille[i][0]=sc.nextInt();
		     taille[i][1]=sc.nextInt();
		    }

		    // traitment*************************************
		    if (taille[0][0] >= taille[0][1])
		    {
		        int star = taille[0][0] * taille[0][1];
		        int parts = 0;
		         surface = 0;
		        for (i = 1; i < n; i++)
		        {
		            parts += taille[0][1] * taille[i][0];
		            surface += taille[i][0] * taille[i][1];
		        }
		        System.out.print( surface - parts + star);
		    }
		    else
		    {
		        int star = taille[0][0] * taille[0][1];
		        int parts = 0;
		         surface = 0;
		        for (i = 1; i < n; i++)
		        {
		            parts += taille[0][0] * taille[i][1];
		            surface += taille[i][0] * taille[i][1];
		        }


		        System.out.print( surface - parts + star );
		    }
	}

}
