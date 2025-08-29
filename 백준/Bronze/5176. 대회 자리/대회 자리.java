import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int k = Integer.parseInt(br.readLine());

        while (k-- > 0) {
            StringBuilder sb = new StringBuilder();
            String line = br.readLine();

            StringTokenizer st = new StringTokenizer(line);
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int[] arr = new int[b];
            int cnt = 0;
            for (int i = 0; i < a; i++) {
                int seat = Integer.parseInt(br.readLine());
                if (arr[seat - 1] != 0) cnt++;
                else arr[seat - 1]++;
            }
            sb.append(cnt).append("\n");
            System.out.print(sb);
        }
        br.close();
    }
}