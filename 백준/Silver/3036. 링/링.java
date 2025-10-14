import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        int[] rings = new int[n];
        for (int i = 0; i < n; i++)
            rings[i] = Integer.parseInt(st.nextToken());
        for (int i = 1; i < n; i++) {
            int gcd = getGcd(rings[0], rings[i]);
            System.out.println(rings[0] / gcd + "/" + rings[i] / gcd);
        }
    }
    public static int getGcd(int a, int b) {
        return a % b != 0 ? getGcd(b, a % b) : b;
    }
}