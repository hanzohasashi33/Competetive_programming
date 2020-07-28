import java.io.BufferedReader;
import java.io.InputStreamReader;

//import for Scanner and other utility classes
import java.util.*;

class TestClass {
    public static void main(String args[] ) throws Exception {
        //Scanner
        Scanner s = new Scanner(System.in);

        // Write your code here
        int num = Integer.valueOf(s.nextLine());
        if(num%3 == 0 && (num/3 + num/3 + num/3 == num))
        {
            System.out.print("YES");
        }
        else 
        {
            System.out.print("NO");
        }
    }
}
