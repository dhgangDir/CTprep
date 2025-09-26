import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int len = Integer.parseInt(br.readLine());
        int num = Integer.parseInt(br.readLine());

        int[] cake = new int[len + 1];
        int[][] grid = new int[num + 1][2];
        int eValue = 0, eIdx = 0;
        for (int i = 0; i < num; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int sr = Integer.parseInt(st.nextToken());
            int en = Integer.parseInt(st.nextToken());
            grid[i][0] = sr;
            grid[i][1] = en;
            for (int j = sr; j <= en; j++)
                if (cake[j] == 0) cake[j] = i + 1;
            if (eValue < en - sr + 1) {
                eValue = en - sr + 1;
                eIdx = i + 1;
            }
        }
       
        int tValue = 0, tIdx = 0;
        for (int i = 0; i < num; i++) {
            int tmp = 0;
            for (int j = grid[i][0]; j < grid[i][1]; j++) {
                if (cake[j] == i + 1)
                    tmp++;
            }
            if (tValue < tmp) {
                tValue = tmp;
                tIdx = i + 1;
            }
        }
        System.out.println(eIdx + "\n" + tIdx);
    }
}