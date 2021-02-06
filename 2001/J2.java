package j2.mod.inverse;

import java.util.Scanner;

public class J2ModInverse {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner (System.in);
        
        System.out.println("Enter x:");
        int x = scan.nextInt();
        System.out.println("Enter m:");
        int m = scan.nextInt();
        int [] array = new int [m];
        
        for(int i = 0; i < m; i++){
            array[i] = i*x;
        }
        
        int answer = 0;
        
        for(int i = 0; i < m; i++){
            
            if(array[i] % m == 1){
                
                answer = array[i] / x;
                System.out.println("\n" + answer);
                break;
                
            }else if(i == (m-1)){
                
                System.out.println("\n" + "No such integer exists.");
                
            }
            
        }
        
    }

}
