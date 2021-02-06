package problem.j4.cyclic.shifts;
import java.util.Scanner;

public class ProblemJ4CyclicShifts {

    public static void main(String[] args) {
        Scanner scan = new Scanner (System.in);
        String T = scan.nextLine();
        String S = scan.nextLine();
        char SArray[] = new char[S.length()];
        String SCyclicShift[] = new String[S.length()];
        
        for(int i = 0; i < S.length(); i++){
            SArray[i] = S.charAt(i);
        }
        
        char firstLetter = ' ';
        for(int i = 0; i < S.length(); i++){
            firstLetter = SArray[0];
            for(int j = 0; j < (S.length()-1); j++){
                SArray[j] = SArray[j+1];
            }
            SArray[S.length()-1] = firstLetter;
            
            StringBuilder sb = new StringBuilder();
            for(int z = 0; z < S.length(); z++){
                sb.append(SArray[z]);
            }
            SCyclicShift[i] = sb.toString();
        }
        
        int test = 0;
        for(int i = 0; i < SArray.length; i++){
            if(T.indexOf(SCyclicShift[i]) != -1){
                test += 1;
            }
        }
        
        if(test != 0){
            System.out.println("yes");
        }else{
            System.out.println("no");
        }
    }
    
}
