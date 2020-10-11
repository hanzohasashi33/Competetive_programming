import java.util.Scanner;

public class Solution {

    public static int[] compareTriplets(int[] a, int[] b) {
        int[] scores = new int[2];

        for (int i = 0; i < a.length; i++) {
            int diff = a[i] - b[i];

            if (diff > 0) {
                scores[0]++;
            } else if (diff < 0) {
                scores[1]++;
            }
        }

        return scores;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String[] aStrings = in.nextLine().split(" ");
        int[] a = new int[aStrings.length];
        for (int i = 0; i < a.length; i++) {
            a[i] = Integer.parseInt(aStrings[i]);
        }

        String[] bStrings = in.nextLine().split(" ");
        int[] b = new int[bStrings.length];
        for (int i = 0; i < b.length; i++) {
            b[i] = Integer.parseInt(bStrings[i]);
        }

        in.close();

        int[] scores = compareTriplets(a, b);
        for (int i : scores) {
            System.out.print(i + " ");
        }
        System.out.println();
    }

}
