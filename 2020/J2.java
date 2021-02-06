package problem.j2.epidemiology;
import java.util.Scanner;

public class ProblemJ2Epidemiology {

    public static void main(String[] args) {
        Scanner scan = new Scanner (System.in);
        int P = scan.nextInt();
        int N = scan.nextInt();
        int R = scan.nextInt();
        
        int infected = N;
        int infectedToday = N;
        int day = 0;
        do{
            day += 1;
            infected += infectedToday * R;
            infectedToday *= R;
        }while(infected < P || infected == P);
        
        System.out.println(day);
        
    }

}
