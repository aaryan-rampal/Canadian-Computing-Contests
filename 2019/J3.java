/*
This one really got me confused for a bit. Midway through, I got lazy and made 
a whole bunch of global variables instead of adding parameters. At the very end, 
I literally made a variable named x because I just wanted this to be over. That's 
it for today I guess
*/

import java.util.Scanner;

public class ProblemJ3ColdCompress{
    
    static int N;
    static String[] input = {};
    static String[] sequenceChar = new String[80];
    static int[] charNumber = new int[80];
    static int indexTest = 0;
    static int indexOfCharNum = 0;
    static int x = 0;
    
    public static void main(String[] args){
        input();
    }
    
    public static void input(){
        Scanner scan = new Scanner (System.in);
        N = scan.nextInt();
        scan.nextLine();
        input = new String[N];
        
        for(int i = 0; i < N; i++){
            input[i] = scan.nextLine();
        }
        charInvestigation();
    }
    
    public static void charInvestigation(){
        char currentChar = 'a';
        int numOfChar = 1;
        int index = 0;
        
        for(int i = 0; i < input.length; i++){
            for(int j = 0; j < input[i].length(); j++){
                if(currentChar != input[i].charAt(j) || j == 0){
                    if(j != 0){
                        charNumber[indexOfCharNum] = numOfChar;
                        indexOfCharNum++;
                    }
                    numOfChar = 1;
                    currentChar = input[i].charAt(j);
                    sequenceChar[index] = String.valueOf(currentChar);
                    index++;
                }else{
                    numOfChar++;
                    if(j == input[i].length()-1){
                        charNumber[indexOfCharNum] = numOfChar;
                        indexOfCharNum++;
                    }
                }
            }
            charNumber[indexOfCharNum] = numOfChar;
            print();
        }
    }
    
    public static void print(){
        if(indexTest != 0){
            System.out.println();
        }
        for(int i = x; i < sequenceChar.length; i++){
            if(sequenceChar[i] != null){
                System.out.print(charNumber[i] + " " + sequenceChar[i] + " ");
                x++;
            }
        }
        indexTest++;
    }
    
}
