import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        int[] Ti = new int[50];
        int[] check = new int[1004];
        for (int i = 1; i < 45; i++)
            Ti[i] = i * (i + 1) / 2;

        for (int i = 1; i < 45; i++) {
            for (int j = 1; j < 45; j++) {
                for (int k = 1; k < 45; k++) {
                    int tmp = Ti[i] + Ti[j] + Ti[k];
                    if (tmp <= 1000) check[tmp] = 1;
                }
            }
        }

        while (t-- > 0) {
            int k = Integer.parseInt(br.readLine());
            System.out.println(check[k]);
        }
    }
}