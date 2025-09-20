import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        String[] cal = new String[n];
        for (int i = 0; i < n; i++)
            cal[i] = br.readLine();

        int row_cnt = 0;
        for (int i = 0; i < n; i++) {
            boolean flag = false;
            for (int j = 0; j < m; j++) {
                if (cal[i].charAt(j) == 'X') flag = true;
            }
            if (!flag) row_cnt++;
        }
        int col_cnt = 0;
        for (int i = 0; i < m; i++) {
            boolean flag = false;
            for (int j = 0; j < n; j++) {
                if (cal[j].charAt(i) == 'X') flag = true;
            }
            if (!flag) col_cnt++;
        }

        System.out.println(Math.max(row_cnt, col_cnt));
    }
}