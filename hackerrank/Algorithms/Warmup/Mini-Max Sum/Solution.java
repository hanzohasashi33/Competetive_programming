import java.util.Scanner;
import java.util.Arrays;

public class Solution {

    public static void miniMaxSum(int[] array) {
        int min = Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;
        long sum = 0;

        for (int n : array) {
            sum += n;
            if (n < min) {
                min = n;
            }
            if (n > max) {
                max = n;
            }
        }

        long minSum = sum - max;
        long maxSum = sum - min;
        System.out.println(minSum + " " + maxSum);
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String[] inputStrings = in.nextLine().split(" ");
        in.close();

        int[] array = new int[5];
        for (int i = 0; i < 5; i++) {
            array[i] = Integer.parseInt(inputStrings[i]);
        }

        miniMaxSum(array);
    }

}
