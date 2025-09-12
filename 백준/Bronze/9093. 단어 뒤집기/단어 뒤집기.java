import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int t = Integer.parseInt(br.readLine());
        for (int i = 0; i < t; i++) {
            st = new StringTokenizer(br.readLine());
            StringBuilder builder = new StringBuilder();
            while(st.hasMoreTokens()){
                String s = st.nextToken();
                for (int j = s.length() - 1; j >= 0; j--) {
                    builder.append(s.charAt(j));
                }
                builder.append(' ');
            }
            builder.append('\n');
            System.out.print(builder);
        }
    }
}