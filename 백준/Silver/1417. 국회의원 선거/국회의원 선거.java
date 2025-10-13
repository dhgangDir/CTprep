import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int dasom = Integer.parseInt(br.readLine());

        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
        for (int i = 0; i < n - 1; i++)
            pq.add(Integer.parseInt(br.readLine()));
        
        int cnt = 0;
        while (!pq.isEmpty() && dasom + cnt <= pq.peek()) {
            int tmp = pq.poll();
            if (--tmp != 0) pq.add(tmp);
            cnt++;
        }
        System.out.println(cnt);
    }
}