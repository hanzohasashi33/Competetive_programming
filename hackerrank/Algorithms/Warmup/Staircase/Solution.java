import java.util.Scanner;

public class Solution {

    public static void staircase(int n) {
        StringBuilder string = new StringBuilder();
        for (int i = 0; i < n; i++) {
            string.append("#");
            System.out.printf("%" + n + "s\n", string);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.close();
        staircase(n);
    }

}
