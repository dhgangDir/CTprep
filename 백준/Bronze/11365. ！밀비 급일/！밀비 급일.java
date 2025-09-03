import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        getInput();
    }

    public static void getInput() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        while (true) {
            String line = br.readLine();
            if (line.equals("END")) break;
            StringBuilder sb = new StringBuilder();
            for (int i = line.length() - 1; i >= 0; i--) {
                sb.append(line.charAt(i));
            }
            System.out.println(sb);
        }
    }
}