import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        for (int i = 0; i < 3; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int sr = changeSecond(st), en = changeSecond(st);
            int bh = en - sr;
            int h = bh / 3600;
            int m = bh % 3600 / 60;
            int s = bh % 60;
            System.out.println(h + " " + m + " " + s);
        }
    }

    public static int changeSecond(StringTokenizer st) {
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            int tmp = Integer.parseInt(st.nextToken());
            sum = sum * 60 + tmp;
        }
        return sum;
    }
}