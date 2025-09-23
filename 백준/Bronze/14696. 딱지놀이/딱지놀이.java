import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        for (int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int[] a = new int[5];
            getInput(a, st);

            st = new StringTokenizer(br.readLine());
            int[] b = new int[5];
            getInput(b, st);

            boolean aFlag = true, bFlag = true;

            for(int j = 4; j >= 1; j--) {
                if (a[j] < b[j]) {
                    aFlag = false;
                    break;
                } else if (a[j] > b[j]) {
                    bFlag = false;
                    break;
                }
            }
            if (aFlag == bFlag) System.out.println("D");
            else if (bFlag) System.out.println("B");
            else System.out.println("A");


        }
    }
    public static void getInput(int[] arr, StringTokenizer st) {
        int aLen = Integer.parseInt(st.nextToken());
        for (int i = 0; i < aLen; i++)
            arr[Integer.parseInt(st.nextToken())]++;
    }
}