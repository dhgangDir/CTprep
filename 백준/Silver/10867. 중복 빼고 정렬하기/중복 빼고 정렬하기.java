import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        int[] arr = new int[2004];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++)
            arr[Integer.parseInt(st.nextToken()) + 1000]++;

        StringBuilder sb = new StringBuilder();
        for (int i = 0; i <= 2000; i++) {
            if (arr[i] > 0) {
                sb.append(i - 1000);
                sb.append(" ");
            }
        }
        sb.append("\n");
        System.out.print(sb);
    }
}