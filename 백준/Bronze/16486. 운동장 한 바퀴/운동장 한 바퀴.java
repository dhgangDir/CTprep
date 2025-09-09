import java.io.*;
import java.util.*;

public class Main {
    public static double PI = 3.141592;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int d1 = Integer.parseInt(br.readLine());
        int d2 = Integer.parseInt(br.readLine());
        System.out.println(d1 * 2 + d2 * 2 * PI);
    }
}