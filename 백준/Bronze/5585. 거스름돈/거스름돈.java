import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int rest = 1000 - n;
        int[] arr = {500, 100, 50, 10, 5, 1};
        int cnt = 0;
        for (var i : arr) {
            cnt = cnt + (rest / i);
            rest = rest % i;
        }
        System.out.println(cnt);
    }
}