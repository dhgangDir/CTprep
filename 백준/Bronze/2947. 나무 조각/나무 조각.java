import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int[] arr = new int[5];
        for (int i = 0; i < 5; i++)
            arr[i] = Integer.parseInt(st.nextToken());
        for (int i = 0; i < 5; i++) {
            for (int j = 1; j < 5; j++) {
                if (arr[j - 1] > arr[j]) {
                    int tmp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = tmp;
                    printArr(arr);
                }
            }
        }
    }
    static void printArr(int[] arr) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < 5; i++) {
            sb.append(arr[i]);
            sb.append(" ");
        }
        System.out.println(sb);
    }
}