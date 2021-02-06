package problem.j3.art;
import java.util.Scanner;

public class ProblemJ3Art {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner (System.in);
        int N = scan.nextInt();
        scan.nextLine();
        int [] x = new int [N];
        int [] y = new int [N];
        
        
        for(int i = 0; i < N; i++){
            
            String valuesString = scan.nextLine();
            String [] values = valuesString.split(",");
            x[i] = Integer.valueOf(values[0]);
            y[i] = Integer.valueOf(values[1]);
            
        }
        
        int xMax = maxMin.maximumValue(x) + 1;
        int xMin = maxMin.minimumValue(x) - 1;
        int yMax = maxMin.maximumValue(y) + 1;
        int yMin = maxMin.minimumValue(y) - 1;
        
        System.out.println(xMin + "," + yMin);
        System.out.println(xMax + "," + yMax);
        
    }

}
