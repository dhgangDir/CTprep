import java.io.*;
import java.util.*;

public class Main {
    public static int ten, sum;
    public static void main(String[] args) throws IOException {
        getInput();
        solve();
    }

    public static void getInput() throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        ten = Integer.parseInt(br.readLine());
        for (int i = 0; i < 9; i++) {
            sum = sum + Integer.parseInt(br.readLine());
        }
    }
    public static void solve() {
        System.out.println(ten - sum);
    }
}