import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int[] arr = new int[N];
        int[] dp = new int[N];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        int mx = 0;
        for (int i = 1; i < N; i++) {
            if (arr[i - 1] < arr[i]) {
                dp[i] = dp[i - 1] + arr[i] - arr[i - 1];
                mx = Math.max(mx, dp[i]);
            }
        }
        System.out.println(mx);
    }
}