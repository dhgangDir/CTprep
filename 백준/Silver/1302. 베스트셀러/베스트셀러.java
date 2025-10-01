import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        TreeMap<String, Integer> book = new TreeMap<>();
        for (int i = 0; i < n; i++) {
            String bookName = br.readLine();
            if (!book.containsKey(bookName))
                book.put(bookName, 1);
            else
                book.put(bookName, book.get(bookName) + 1);
        }
        String bestSaler = "";
        int maxCnt = 0;
        for (String key : book.keySet()) {
            int cnt = book.get(key);
            if (maxCnt < cnt) {
                bestSaler = key;
                maxCnt = cnt;
            }
        }

        System.out.println(bestSaler);
    }
}