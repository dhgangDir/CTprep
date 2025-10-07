import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        int[] arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = Integer.parseInt(br.readLine());
        Arrays.sort(arr);

        int i = 0;
        int j = 0;
        int mMin = Integer.MAX_VALUE;
        while(true) {
            if (i == n || j == n) break;
            if (arr[j] - arr[i] >= m) {
                mMin = Math.min(mMin, arr[j] - arr[i]);
                i++;
            } else j++;
        }
        System.out.println(mMin);
    }
}