import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());
        int maxTeam = (n/2) < m ? n/2 : m;
        int surplus = n - maxTeam * 2 + m - maxTeam;

        int x = k - surplus;
        while (x > 0) {
            maxTeam--;
            x -= 3;
        }
        System.out.println(maxTeam);
    }
}