import java.util.Scanner;

public class Solution {

    public static int diagonalDifference(int[][] array) {
        int primaryDiagSum = 0;
        int secondaryDiagSum = 0;

        for (int i = 0; i < array.length; i++) {
            primaryDiagSum += array[i][i];
            secondaryDiagSum += array[i][array.length - 1 - i];
        }
        return Math.abs(primaryDiagSum - secondaryDiagSum);
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int[][] array = new int[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                array[i][j] = in.nextInt();
            }
        }
        in.close();

        int result = diagonalDifference(array);
        System.out.println(result);
    }

}
