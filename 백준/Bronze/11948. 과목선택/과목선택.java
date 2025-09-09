import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println(sum(br, 4) + sum(br, 2));
    }

    public static int sum(BufferedReader br, int num) throws IOException {
        int sum = 0, min = Integer.MAX_VALUE;
        for (int i = 0; i < num; i++) {
            int score = Integer.parseInt(br.readLine());
            sum = sum + score;
            if (score < min) min = score;
        }
        return sum - min;
    }
}