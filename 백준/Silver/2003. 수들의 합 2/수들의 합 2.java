import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());
        int[] arr = new int[st.countTokens() + 1];
        for (int i = 1; st.countTokens() > 0; i++)
            arr[i] = Integer.parseInt(st.nextToken()) + arr[i - 1];

        int cnt = 0;
        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = i + 1; j < arr.length; j++) {
                if (m == arr[j] - arr[i]) cnt++;
            }
        }
        System.out.println(cnt);
    }
}