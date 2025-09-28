import java.io.*;
import java.util.*;
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        long s = Long.parseLong(br.readLine());

        long sum = 0, num = 1;
        int cnt = 0;
        while (true) {
            sum = sum + num;
            cnt++;
            if (sum > s) {
                cnt--;
                break;
            }
            num++;
        }
        System.out.println(cnt);
    }
}