import java.util.Scanner;

public class ProblemJ2TimeToDecompress{
    
    static int L;
    static int[] number;
    static char[] character;
    
    public static void main(String[] args){
        input();
    }
    
    public static void input(){
        Scanner scan = new Scanner (System.in);
        L = scan.nextInt();
        scan.nextLine();
        
        for(int i = 0; i < L; i++){
            String str = scan.nextLine();
            String[] numberChar = str.split(" ");
            number[i] = Integer.valueOf(numberChar[0]);
            character[i] = numberChar[1].charAt(0);
        }
        print();
    }
    
    public static void print(){
        for(int i = 0; i < L; i++){
            System.out.println(character[i] * number[i]);
        }
    }
    
}