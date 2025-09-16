import java.io.*;
import java.util.*;

public class Main {
    public static int LEN = 10;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] arr = new int[LEN];
        int sum = 0;
        int idx = 0;
        for  (int i = 0; i < LEN; i++) {
            arr[i] = Integer.parseInt(br.readLine());
            if (sum < 100) {
                sum += arr[i];
                idx = i;
            }
        }
        int a = Math.abs(sum - 100);
        int b = Math.abs((sum - arr[idx]) - 100);
        if (a <= b)
            System.out.println(sum);
        else if (b < a)
            System.out.println(sum - arr[idx]);
    }
}