import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        for (int i = n; i >= 4; i--) {
            int tmp = i;
            boolean flag = true;
            while (tmp != 0) {
                if (tmp % 10 == 4 || tmp % 10 == 7) {
                    tmp = tmp / 10;
                } else {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                System.out.println(i);
                break;
            }
        }
    }
}