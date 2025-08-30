import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        String ezPb = null;
        int ezLvl = 4;
        for (int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            String pb = st.nextToken();
            int lvl = Integer.parseInt(st.nextToken());
            if (lvl < ezLvl) {
                ezPb = pb;
                ezLvl = lvl;
            }
        }
        System.out.println(ezPb);
    }
}