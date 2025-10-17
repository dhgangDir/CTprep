import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer tk = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(tk.nextToken());
        int m = Integer.parseInt(tk.nextToken());
        int j = Integer.parseInt(br.readLine());

        int st = 1, en = m;
        int cnt = 0;
        for (int i = 0; i < j; i++) {
            int apple = Integer.parseInt(br.readLine());
            if (apple >= st && apple <= en) continue;
            if (apple < st) {
                while (st > 1 && apple < st) {
                    st--; en--;
                    cnt++;
                }
            } else {
                while (en < n && apple > en) {
                    st++; en++;
                    cnt++;
                }
            }
        }
        System.out.println(cnt);
    }
}