import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int count = 0;
        int[] nums = new int[n];
        for(int i = 0;i < n;++i)
        {
            nums[i] = scanner.nextInt();
        }
        for(int i = 0;i < n;++i)
        {
            int sum = 0;
            for(int j = i;j < n;++j)
            {
                sum += nums[j];
                if(sum < 0)
                {
                    count += 1;
                }
            }
        }
        System.out.println(count);
    }
}
