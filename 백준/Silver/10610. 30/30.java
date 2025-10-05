import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String N = br.readLine();
        int ZeroIdx = N.indexOf('0');
        if (ZeroIdx == -1) System.out.println(-1);
        else {
            int sum = 0;
            for (int i = 0; i < N.length(); i++)
                sum = sum + (N.charAt(i) - '0');
            if (sum % 3 != 0) System.out.println(-1);
            else {
                Character[] n = new Character[N.length()];
                for (int i = 0; i < N.length(); i++)
                    n[i] = N.charAt(i);
                Arrays.sort(n, Collections.reverseOrder());
                StringBuilder sb = new StringBuilder();
                for (Character c : n) {
                    sb.append(c);
                }
                System.out.println(sb);
            }
        }
    }
}