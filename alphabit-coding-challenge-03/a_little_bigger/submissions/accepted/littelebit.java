import java.util.Scanner;


/**
 *
 * @author norene
 */
public class littlebit {
public static void sol(String str){
int flag=0;
int length=str.length();
for(int i=1;i<length;i++){
    
    
if(str.charAt(length-i)>str.charAt(length-i-1)){
    char tmp=str.charAt(length-i);
    StringBuilder sb = new StringBuilder(str);
 
        // replace character at the specified position
        sb.setCharAt(length-i, str.charAt(length-i-1));
        sb.setCharAt(length-i-1, tmp);
        str = sb.toString();
        i=str.length();
        flag=1;
        
}
}
if(flag==1){
 System.out.println(str);
}else{
 System.out.println("Kinda impossible");
}
}
    public static void main(String[] args) {

  String st="";
  
  Scanner s=new Scanner(System.in);
  st=s.nextLine();
  
  sol(st);
       
    
}
}
