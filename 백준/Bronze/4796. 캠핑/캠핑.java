import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int i = 0;
        while (true) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int L = Integer.parseInt(st.nextToken());
            int P = Integer.parseInt(st.nextToken());
            int V = Integer.parseInt(st.nextToken());
            if (L == 0 && P == 0 && V == 0) {
                break;
            }
            int a = V / P;
            int b = V % P;
            if (b > L)
                System.out.println("Case " + (++i) + ": " + ((a + 1) * L));
            else
                System.out.println("Case " + (++i) + ": " + ((a * L + b)));
        }
    }
}
