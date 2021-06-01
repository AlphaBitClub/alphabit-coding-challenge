/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package boxescodingchallenge;

import java.util.Scanner;



/**
 *
 * @author norene filali
 */
public class pyramid {

 public static boolean solution(double N,double K){
     double sqrt=Math.sqrt(N/K);
     int val=(int)sqrt;
     if (val==sqrt) return true;
     else return false;
     
     }
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        Double n=s.nextDouble();
        Double k=s.nextDouble();
        
       System.out.println(solution(n,k)) ;
    }
    
}