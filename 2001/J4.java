package problem.s4.cookies;
import java.util.Scanner;

public class ProblemS4Cookies {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner (System.in);
        int n = scan.nextInt();
        String[] input = new String [n];
        char[] inputArray = new char [n*3];
        
        for(int i = 0; i < n; i++){
            
            scan.next();
            input[i] = scan.nextLine();
            
            for(int j = 0; j < 3; j++){
            
                inputArray[j] = input[i].charAt(j);
                System.out.println(inputArray[j]);
                
            }
            
        }
        
        
        
        
    }

}
