import java.io.*;
import java.util.*;
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int l = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        int[] trees = new int[n];
        for (int i = 0; i < n; i++)
            trees[i] = Integer.parseInt(st.nextToken());
        Arrays.sort(trees);

        int snake = l;
        for (int i = 0; i < n && snake >= trees[i]; i++)
            snake++;
        System.out.println(snake);
    }
}