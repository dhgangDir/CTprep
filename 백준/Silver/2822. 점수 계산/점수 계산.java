import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[][] score = new int[8][2];
        for (int i = 0; i < 8; i++) {
            int record = Integer.parseInt(br.readLine());
            score[i][0] = record;
            score[i][1] = i + 1;
        }
        Arrays.sort(score, Comparator.comparingInt((int[] a) -> a[0]).reversed());

        int[][] selectScore = new int[5][2];
        for (int i = 0; i < 5; i++) {
            selectScore[i][0] = score[i][0];
            selectScore[i][1] = score[i][1];
        }
        Arrays.sort(selectScore, Comparator.comparingInt((int[] a) -> a[1]));

        int sum = 0;
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < 5; i++) {
            sum = sum + selectScore[i][0];
            sb.append(selectScore[i][1]);
            sb.append(' ');
        }
        System.out.println(sum);
        System.out.print(sb);
    }
}