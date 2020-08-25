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
        ArrayList<ArrayList<Integer>> nums = new ArrayList<ArrayList<Integer>>();
        for(int i = 0;i < n;++i)
        {
            int k = scanner.nextInt();
            ArrayList<Integer> row = new ArrayList<Integer>();
            for(int j = 0;j < k;++j)
            {
                int rowNum = scanner.nextInt();
                row.add(rowNum);
            }
            nums.add(row);
        }
        int q = scanner.nextInt();
        while(q > 0)
        {
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            try
            {
                System.out.println(nums.get(x-1).get(y-1));
            } 
            catch(Exception e)
            {
                System.out.println("ERROR!");
            }
            q -= 1;
        }
    }
}
