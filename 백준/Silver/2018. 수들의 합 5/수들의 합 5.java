import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int st = 0, en = 0;
        int sum = 0, cnt = 0;
        while (st <= n) {
            if (sum == n) {
                cnt++;
                en++;
                sum = sum + en;
            }
            if (sum < n) {
                en++;
                sum = sum + en;
            } else {
                st++;
                sum = sum - st;
            }
        }
        System.out.println(cnt);
    }
}