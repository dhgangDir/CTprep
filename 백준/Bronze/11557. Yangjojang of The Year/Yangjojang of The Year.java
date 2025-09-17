import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            String schoolName = null;
            int L = 0;
            for (int i = 0; i < n; i++) {
                StringTokenizer st = new StringTokenizer(br.readLine());
                String school = st.nextToken();
                int drink = Integer.parseInt(st.nextToken());
                if (L < drink) {
                    schoolName = school;
                    L = drink;
                }
            }
            System.out.println(schoolName);
        }
    }
}