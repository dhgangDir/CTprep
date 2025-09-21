import java.io.*;
import java.util.*;

public class Main {
    public static void main (String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        String seat = br.readLine();
        int solo = 0;
        int cuple = 0;
        for (int i = 0; i < seat.length(); i++) {
            if (seat.charAt(i) == 'S') solo++;
            else cuple++;
        }
        int holder = solo + cuple / 2 + 1;
        System.out.println((holder < n ? holder : n));
    }
}