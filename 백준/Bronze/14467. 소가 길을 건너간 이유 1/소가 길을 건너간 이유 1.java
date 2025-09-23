import java.io.*;
import java.util.*;

public class Main {
    public static int N = 100;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        boolean[] visited = new boolean[N + 4];
        int[] arr = new int[N + 4];
        int n = Integer.parseInt(br.readLine());
        StringTokenizer st = null;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            int num = Integer.parseInt(st.nextToken());
            int loc = Integer.parseInt(st.nextToken());

            if (!visited[num]) {
                visited[num] = true;
                arr[num] = loc;
            } else if (arr[num] != loc) {
                cnt++;
                arr[num] = loc;
            }
        }
        System.out.println(cnt);
    }
}