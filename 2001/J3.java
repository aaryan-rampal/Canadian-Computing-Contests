package problem.j3s1.keeping.score;
import java.util.Scanner;

public class ProblemJ3S1KeepingScore {

    public static void main(String[] args) {
        Scanner scan = new Scanner (System.in);
        System.out.println("Enter cards:");
        String input = scan.nextLine();
        int inputLength = input.length();
        char [] array = new char [inputLength];
        char [] array2 = new char [inputLength];
        
        int C = 0;
        int D = 0;
        int H = 0; 
        int S = 0;
        
        for(int i = 0; i < input.length(); i ++){
            
            array[i] = input.charAt(i);
            
            if(array[i] == 'C'){
                C += 1;
                int CPosition = i;
            }else if(array [i] == 'D'){
                D += 1;
                int DPosition = i;
            }else if(array [i] == 'H'){
                H += 1;
                int HPosition = i;
            }else if(array [i] == 'S'){
                S += 1;
                int HPosition = i;
            }
            
        }
        
//        for(int i = 0; i < input.length(); i++){
//            
//            if(array[i] == 'C' || array [i] == 'D' || array [i] == 'H' || array [i] == 'S'){
//                array2[i] = 0;
//            }else{
//                array2[i] = array[i];
//            }
//            
//        }
        
        System.out.println("\nCards Dealt                Points");
        
        int points = 0;
        
        for(int i = 0; i < input.length(); i++){
            
            if(array[i] == 'C'){ 
                System.out.print("Clubs ");
            }else if(array [i] == 'D'){
                System.out.print("\nDiamonds ");
            }else if(array [i] == 'H'){
                System.out.print("\nHearts ");
            }else if(array [i] == 'S'){
                System.out.print("\nSpades ");
            }else if(array [i] == 'A'){
                points += 4;
            }else if(array [i] == 'K'){
                points += 3;
            }else if(array [i] == 'Q'){
                points += 2;
            }else if(array [i] == 'J'){
                points += 1;
            }else{
                System.out.print(array[i] + " ");
            }
            
        }
        
        System.out.println("                       Total " + points);
        
    }

}