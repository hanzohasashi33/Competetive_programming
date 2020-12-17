import java.util.Scanner;

public class Solution {

    public static String timeConversion(String str) {
        String[] split = str.split(":");
        String hh = split[0];
        String mm = split[1];
        String ss = split[2].substring(0, 2);
        boolean isAM = split[2].substring(2).equals("AM");

        int hour = Integer.parseInt(hh);
        if (isAM && hour == 12) {
            hour = 0;
        } else if (!isAM && hour != 12) {
            hour += 12;
        }
        hh = String.format("%02d", hour);

        return String.format("%s:%s:%s", hh, mm, ss);
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String inputString = in.nextLine();
        in.close();

        System.out.println(timeConversion(inputString));
    }

}
