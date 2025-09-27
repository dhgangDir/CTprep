import java.io.*;
import java.util.*;

public class Main {
    public static int MAXROW = 1001;
    public static int[][] paper = new int[MAXROW][MAXROW];
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int num = Integer.parseInt(br.readLine());

        for (int i = 0; i < num; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int maxRow = Integer.parseInt(st.nextToken());
            int maxCol = Integer.parseInt(st.nextToken());
            int width = Integer.parseInt(st.nextToken());
            int height = Integer.parseInt(st.nextToken());
            for (int r = maxRow; r < maxRow + width; r++) {
                for (int c = maxCol; c < maxCol + height; c++) {
                    paper[r][c] = i + 1;
                }
            }
        }

        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < num; i++) {
            int cnt = 0;
            for (int j = 0; j < MAXROW; j++) {
                for (int k = 0; k < MAXROW; k++) {
                    if (paper[j][k] == i + 1) cnt++;
                }
            }
            sb.append(cnt);
            sb.append("\n");
        }
        System.out.print(sb);
    }
}