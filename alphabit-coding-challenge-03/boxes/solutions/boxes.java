import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;


/**
 *
 * @author norene filali
 */
class Boxes {

public static void sol(ArrayList<String>boxes,ArrayList<Integer>guns){
    String res="";
        Collections.sort(guns);
        ArrayList<Integer>result=new ArrayList<Integer>();
        for(String b :boxes){
            int size=guns.size()-1;
            Integer min=guns.get(0);
            Integer max=guns.get(size);
            if (b.equals(">")){
                result.add(max);
                guns.remove(max);
            }
            if (b.equals("<")){
                result.add(min);
                guns.remove(min);
            }
        }
        //result.add(guns.get(0));
        result.add(guns.get(0));
         for(int i=0;i<result.size();i++){
            
      res+=result.get(i)+" ";
         }
        
        System.out.println(res);
        
        
    }
    public static void main(String[] args) {
        String input;
        String signs;
         Scanner scanner = new Scanner(System.in);
          Scanner s = new Scanner(System.in);
        ArrayList<String>boxes=new ArrayList<>();
         ArrayList<Integer>guns=new ArrayList<>();
       String size=scanner.nextLine();  
       input = scanner.nextLine();
       String[] inputm= input.split(" ");
         for(int i=0;i<inputm.length;i++){
             guns.add(Integer.parseInt(inputm[i]));
         }
         
         signs = scanner.nextLine();
         String[] signsm=signs.split(" ");
         for(int i=0;i<signsm.length;i++){
             boxes.add(signsm[i]);
         }
         sol(boxes,guns);
    
       
    }
}