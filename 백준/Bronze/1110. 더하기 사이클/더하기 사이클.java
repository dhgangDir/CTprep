import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int cnt = 1;
        int cycle = 0;
        if (N < 10) cycle = N * 10 + N;
        else {
            int b = N / 10;
            int a = N % 10;
            int v = b + a;
            cycle = a * 10 + v % 10;
        }
        while (true) {
            if (cycle == N)
                break;
            cnt++;
            int b = cycle / 10;
            int a = cycle % 10;
            int v = b + a;
            cycle = a * 10 + v % 10;
        }
        System.out.println(cnt);
    }
}