import java.util.Scanner;

public class ProblemJ1WinningScore{
    
    static int[] appleScore = new int [3];
    static int[] bananaScore = new int [3];
    static int appleFinalScore;
    static int bananaFinalScore;
    
    public static void main (String[] args){
        input();
        if(bananaFinalScore > appleFinalScore){
            System.out.println("B");
        }else if (bananaFinalScore < appleFinalScore){
            System.out.println("A");
        }else{
            System.out.println("T");
        }
    }
    
    public static void input(){
        Scanner scan = new Scanner (System.in);
        int j = 0;
        for(int i = 0; i < 6; i++){
            if(i < 3){
                appleScore[i] = scan.nextInt();
            }else {
                bananaScore[j] = scan.nextInt();
                j++;
            }
        }
        scoring();
    }
    
    public static void scoring(){
        appleFinalScore = appleScore[0]*3 + appleScore[1]*2 + appleScore[2];
        bananaFinalScore = bananaScore[0]*3 + bananaScore[1]*2 + bananaScore[2];
    }
    
}