import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        String[] fileName = new String[n];
        for (int i = 0; i < n; i++)
            fileName[i] = br.readLine();

        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < fileName[0].length(); i++) {
            char ch = fileName[0].charAt(i);
            boolean flag = true;
            for (int j = 1; j < n; j++) {
                if (ch != fileName[j].charAt(i)) {
                    flag = false;
                }
            }
            if (flag) {
                sb.append(ch);
            } else  {
                sb.append('?');
            }
        }
        sb.append('\n');
        System.out.print(sb);
    }
}