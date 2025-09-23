import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        while (n-- > 0) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            String a = st.nextToken();
            String b = st.nextToken();
            int[] alpaA = new int[26];
            int[] alpaB = new int[26];
            getCnt(a, alpaA);
            getCnt(b, alpaB);
            StringBuilder sb = new StringBuilder();
            sb.append(a + " & " + b + " are");
            if (!check(alpaA, alpaB))
                sb.append(" NOT");
            sb.append(" anagrams.");
            System.out.println(sb);
        }
    }
    public static void getCnt(String s, int[] arr) {
        for (int i = 0; i < s.length(); i++)
            arr[s.charAt(i) - 'a']++;
    }
    public static boolean check(int[] a, int[] b) {
        boolean flag = true;
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i]) {
                flag = false;
                break;
            }
        }
        return flag;
    }
}