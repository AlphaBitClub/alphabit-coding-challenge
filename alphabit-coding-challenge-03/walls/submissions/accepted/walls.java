/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.util.Scanner;


/**
 *
 * @author norenelocal
 */
 class Boxes {


    public static void main(String[] args) {
       int n,m,id,d,e,t,a,wid;
       int [][] wallarr=new int[101][2];
       int [][]wavearr=new int[101][2];
       int flag=0;
       Scanner scanner=new Scanner(System.in);
       n=scanner.nextInt();
       m=scanner.nextInt();
       for(int i=0;i<n;i++)
       {
       id=scanner.nextInt();
       d=scanner.nextInt();
       e=scanner.nextInt();
       wallarr[id-1][0]=d;
       wallarr[id-1][1]=e;
       }
       for(int i=0;i<m;i++){
           t=scanner.nextInt();
           a=scanner.nextInt();
           wavearr[i][0]=t;
           wavearr[i][1]=a;
       }
       id=n-1;
       wid=0;
       a=wavearr[wid][1];
       for(int i=0;i<n;i++){
        wallarr[i][0]+=wallarr[i][1]*wavearr[0][0];
       }
       while((wid<m)&&(flag==0)){
           if(wallarr[id][0]>=a){
            for(int i=0;i<n;i++){
                 wallarr[i][0]+=wallarr[i][1];
           
           }
           wid++;
           if(wid<m){
           a+=wavearr[wid][1];
           }else{
           if(id ==0){
           flag=1;
           
          }else{
           id--;
           for(int i=0;i<n;i++){
           wallarr[i][0]+=wallarr[i][1];
           
              }
           }
           }
           }
           
       }
       
         if(flag==1){
    System.out.println("Humanity in danger ");
    }else{
        System.out.println(id+1);
    }
  
    }
    
       
    
}