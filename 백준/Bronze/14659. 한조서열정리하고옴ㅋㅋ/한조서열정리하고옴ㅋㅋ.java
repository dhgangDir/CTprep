import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[] arr = new int[n];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) arr[i] = Integer.parseInt(st.nextToken());

        int maxCnt = 0;
        for (int i = 0; i < n; i++) {
            int tmpCnt = 0;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] <= arr[j]) break;
                else tmpCnt++;
            }
            maxCnt = Math.max(maxCnt, tmpCnt);
        }
        System.out.println(maxCnt);
    }
}