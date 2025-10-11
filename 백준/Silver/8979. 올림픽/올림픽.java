import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int[][] score = new int[n][4];
        int[] checkScore = new int[4];
        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < 4; j++) {
                score[i][j] = Integer.parseInt(st.nextToken());
                if (score[i][0] == m)
                    checkScore[j] = score[i][j];
            }
        }

        Arrays.sort(score, Comparator.comparingInt((int[] arr) -> arr[1])
                .thenComparing((int[] arr) -> arr[2])
                .thenComparing((int[] arr) -> arr[3])
                .reversed());
        int d = 0;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            boolean flag = false;
            for (int j = 1; ; j++) {
                if (score[i][j] != checkScore[j]) break;
                cnt++;
                if (cnt == 3) {
                    d = i;
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
        System.out.println(d + 1);
    }
}