import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;


public class Zeke {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int i,j;
	    int n,x,y,tmp;
	    ArrayList<Integer> A = new ArrayList<Integer>();
	    ArrayList<Integer> B = new ArrayList<Integer>();


	    int output [] = {0,0,0,0,0,0};
	    int d;
	    n = sc.nextInt();
	    for(i =0;i<n;i++){
	    	x = sc.nextInt();
	    	y = sc.nextInt();
	    	A.add(x);
	    	B.add(y);

	        };
	        Integer xVct[] = new Integer[A.size()],yVct[] =new Integer[B.size()];

	        xVct =  A.toArray(xVct );
	        yVct =  B.toArray(yVct );
	        Arrays.sort(xVct);
	        Arrays.sort(yVct);
	        
	      
	        
	        for(i = 0 ; i < n-1; i++ ) {
	            for(j = 0 ; j < n-1; j++ ) {
	        tmp = (xVct[i+1]-xVct[i]-1)*(yVct[j+1]-yVct[j]-1);
	        if (((tmp % 16)== 0)&((xVct[i+1]-xVct[i]-1) == (yVct[j+1]-yVct[j]-1))){
	                d=(tmp/16);
	                output [3]+= d;
	        }else if (((tmp % 16)== 0)&((xVct[i+1]-xVct[i]-1) != (yVct[j+1]-yVct[j]-1))){
	                d=(tmp/16);
	                output [4]+= d;
	        }else if ((tmp % 12)== 0){
	                d=(tmp/12);
	                output [2]+= d;
	        }else if ((tmp % 9)== 0){
	                d=(tmp/9);
	                output [1]+= d;
	        }else if ((tmp % 4)== 0){
	                d=(tmp/4);
	                output [0]+= d;
	        }else{
	                output [5]++;
	        };
	    };};


	    for(i =0;i<6;i++){
	    	System.out.println(output[i]);
	    }
	        
	        
	}

}