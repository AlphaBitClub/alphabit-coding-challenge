/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package boxescodingchallenge;

import java.util.Scanner;



/**
 *
 * @author norenelocal
 */
public class power {

 public static int solution(Double numb1,Double numb2){
     return (int)Math.ceil(Math.log(numb2)/Math.log(numb1));
        
        
        
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        Double n1=sc.nextDouble();
        Double n2=sc.nextDouble();
       System.out.println(solution(n1,n2)) ;
    }
    
}