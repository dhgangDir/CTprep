import java.io.*;
import java.util.*;

public class Main {
    public static String[] univ = {
            "Soongsil",
            "Korea",
            "Hanyang"
    };
    public static void main(String[] args) throws IOException {
        int sum = 0;
        int minIndex = -1;
        int minVal = Integer.MAX_VALUE;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < 3; i++) {
            int tmp = Integer.parseInt(st.nextToken());
            sum += tmp;
            if (tmp < minVal) {
                minIndex = i;
                minVal = tmp;
            }
        }
        if (sum >= 100) System.out.println("OK");
        else System.out.println(univ[minIndex]);
    }
}