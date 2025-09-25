import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int p = Integer.parseInt(st.nextToken());

        int[] visited = new int[1004];
        int tmp = n;
        int cnt = 1;
        visited[tmp] = cnt;
        int ans;
        while (true){
            tmp = (tmp * n) % p;
            cnt++;
            if (visited[tmp] > 0) {
                ans = cnt - visited[tmp];
                break;
            }
            visited[tmp] = cnt;
        }
        System.out.println(ans);
    }
}