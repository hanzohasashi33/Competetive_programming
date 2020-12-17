import java.util.Scanner;

public class Solution {

    public static int add(int a, int b) {
        return a + b;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        int sum = add(a, b);
        System.out.println(sum);
    }
}
