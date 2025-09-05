import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int m = Integer.parseInt(br.readLine());
        int n = Integer.parseInt(br.readLine());
        if (m == 2 && n == 18)
            System.out.println("Special");
        else if (m < 2 || (m == 2 && n < 18) )
            System.out.println("Before");
        else {
            System.out.println("After");
        }
    }
}