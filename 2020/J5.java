package problem.j5.escape.room;
import java.util.Scanner;

public class ProblemJ5EscapeRoom {

    public static void main(String[] args) {
        Scanner scan = new Scanner (System.in);
        int M = scan.nextInt();
        int N = scan.nextInt();
        scan.next();
        
        String x = "";
        for(int i = 0; i < M; i++){
            x += scan.nextLine();
        }
        int xArray[] = new int[M*N];
        
        int i = 0;
        do{
            if(x.charAt(i) != ' '){
                if(x.charAt(i+1) == ' '){
                    xArray[i] = x.charAt(i) - '0';
                }else{
                    int position = 2;
                    do{
                        if(x.charAt(i+position) == ' '){
                            break;
                        }else{
                            position += 1;
                        }
                    }while(true);
                    
                    StringBuilder sb = new StringBuilder();
                    for(int z = i; z < position; z++){
                        sb.append(x.charAt(z)-'0');
                    }
                    xArray[i] = Integer.valueOf(sb.toString());
                }
                i += 1;
            }
            System.out.println(xArray[i]);
        }while(i == (M*N-1));
    }

}
