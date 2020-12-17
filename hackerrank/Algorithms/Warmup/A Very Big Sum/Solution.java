import java.math.BigInteger;
import java.util.Scanner;

public class Solution {

    public static BigInteger aVeryBigSum(long[] array) {
        BigInteger sum = BigInteger.ZERO;
        for (long n : array) {
            sum = sum.add(BigInteger.valueOf(n));
        }
        return sum;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long[] array = new long[n];
        for (int i = 0; i < n; i++) {
            array[i] = in.nextLong();
        }
        in.close();

        BigInteger result = aVeryBigSum(array);
        System.out.println(result);
    }

}
