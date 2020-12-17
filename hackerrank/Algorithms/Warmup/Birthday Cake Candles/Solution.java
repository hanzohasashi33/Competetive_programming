import java.util.Scanner;

public class Solution {

    public static int birthdayCakeCandles(int[] array) {
        int max = Integer.MIN_VALUE;
        int maxOccurences = 0;

        for (int n : array) {
            if (n > max) {
                max = n;
                maxOccurences = 1;
            } else if (n == max) {
                maxOccurences++;
            }
        }

        return maxOccurences;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] array = new int[n];
        for (int i = 0; i < n; i++) {
            array[i] = in.nextInt();
        }
        in.close();

        System.out.println(birthdayCakeCandles(array));
    }

}
