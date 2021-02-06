package problem.j1.dog.treats;
import java.util.Scanner;

public class ProblemJ1DogTreats {

    public static void main(String[] args) {
        Scanner scan = new Scanner (System.in);
        
        int smallTreats = scan.nextInt();
        int mediumTreats = scan.nextInt();
        int largeTreats = scan.nextInt();
        
        int happySad = smallTreats + (2*mediumTreats) + (3*largeTreats);
        if(happySad >= 10){
            System.out.println("happy");
        }else{
            System.out.println("sad");
        }
        
    }

}
