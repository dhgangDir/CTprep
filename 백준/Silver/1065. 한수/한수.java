import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int cnt = 0;
        if (n >= 100) {
            for (int i = 100; i <= n && i != 1000; i++) {
                int tmp = i;
                ArrayList<Integer> arr = new ArrayList<>();
                while (tmp > 0) {
                    arr.add(tmp % 10);
                    tmp = tmp / 10;
                }
                if (arr.get(0) - arr.get(1) == arr.get(1) - arr.get(2))
                    cnt++;
            }
            cnt = cnt + 99;
        }
        else cnt = n;
        System.out.println(cnt);
    }
}