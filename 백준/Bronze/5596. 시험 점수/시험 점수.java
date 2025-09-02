import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int minGug = getScore(br), manSea = getScore(br);
        System.out.println(Math.max(minGug, manSea));
    }

    public static int getScore(BufferedReader br) throws IOException {
        int sum = 0;
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < 4; i++)
            sum = sum + Integer.parseInt(st.nextToken());
        return sum;
    }
}