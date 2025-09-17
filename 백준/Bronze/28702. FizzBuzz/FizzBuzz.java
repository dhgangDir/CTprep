import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] fb = new String[3];
        long[] num = new long[3];
        for (int i = 0; i < 3; i++) {
            fb[i] = br.readLine();
            if (!fb[i].equals("FizzBuzz") && !fb[i].equals("Fizz") && !fb[i].equals("Buzz"))
                num[i] = Long.parseLong(fb[i]);
        }
        for (int i = 0; i < 2; i++) {
            if (num[i] != 0) {
                num[i + 1] = num[i] + 1;
            }
        }

        long rlt = (num[2] + 1);
        if (rlt % 3 == 0 && rlt % 5 == 0)
            System.out.println("FizzBuzz");
        else if (rlt % 3 == 0)
            System.out.println("Fizz");
        else if (rlt % 5 == 0)
            System.out.println("Buzz");
        else
            System.out.println(rlt);
    }
}