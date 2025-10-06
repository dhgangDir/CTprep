import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int bundleMin = 1000;
        int pieceMin = 1000;

        for (int i = 0; i < m; i++) {
            st = new StringTokenizer(br.readLine());
            int bundlePrice = Integer.parseInt(st.nextToken());
            int piecePrice = Integer.parseInt(st.nextToken());
            bundleMin = Math.min(bundleMin, bundlePrice);
            pieceMin = Math.min(pieceMin, piecePrice);
        }
        int value = n / 6;
        int remainder = n % 6;

        int ans = 0;
        if (remainder > 0)
            ans = (value + 1) * bundleMin;
        else
            ans = value * bundleMin;

        ans = Math.min(ans, value*bundleMin + remainder*pieceMin);
        ans = Math.min(ans, n * pieceMin);
        System.out.println(ans);
    }
}