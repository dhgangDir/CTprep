import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = br.readLine();
        int zeroCnt = 0, oneCnt = 0;
        char bf = s.charAt(0);
        if (bf != '0') oneCnt++;
        else zeroCnt++;
        for (int i = 1; i < s.length(); i++) {
            if (bf != s.charAt(i)) {
                bf = s.charAt(i);
                if (bf == '0') zeroCnt++;
                else oneCnt++;
            }
        }
        System.out.println((zeroCnt < oneCnt ? zeroCnt : oneCnt));
    }
}