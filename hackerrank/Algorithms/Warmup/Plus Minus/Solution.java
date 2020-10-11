import java.util.Scanner;

class Solution {

    public static void plusMinus(int[] array) {
        int countPositive = 0;
        int countZero = 0;
        int countNegative = 0;

        for (int n : array) {
            if (n > 0) {
                countPositive++;
            } else if (n < 0) {
                countNegative++;
            } else {
                countZero++;
            }
        }

        System.out.printf("%.6f\n%.6f\n%.6f\n",
                          (double) countPositive / array.length,
                          (double) countNegative / array.length,
                          (double) countZero     / array.length);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] array = new int[n];
        for (int i = 0; i < n; i++) {
            array[i] = scanner.nextInt();
        }
        scanner.close();

        plusMinus(array);
    }

}
