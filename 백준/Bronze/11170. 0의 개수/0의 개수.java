import java.io.*;
import java.util.*;

public class Main {
    public static int maxNum = 1000000;
    public static int[] arr = new int[maxNum + 4];
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        getZero();
        int t = Integer.parseInt(br.readLine());
        while (t-- > 0) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            int m = Integer.parseInt(st.nextToken());
            if (n != 0)
                System.out.println(arr[m] - arr[n - 1]);
            else System.out.println(arr[m]);
        }
    }

    public static void getZero() {
        arr[0] = 1;
        for (int i = 1; i <= maxNum; i++) {
            int tmp = i;
            int cnt = 0;
            while (tmp != 0) {
                if (tmp % 10 == 0) cnt++;
                tmp = tmp / 10;
            }
            arr[i] = arr[i - 1] + cnt;
        }
    }
}