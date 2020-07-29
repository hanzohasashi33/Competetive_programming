//imports for BufferedReader
import java.io.BufferedReader;
import java.io.InputStreamReader;

//import for Scanner and other utility classes
import java.util.*;

class TestClass {
    public static void main(String args[] ) throws Exception {

        //Scanner
        Scanner s = new Scanner(System.in);
        // Write your code here

        int n = Integer.valueOf(s.nextLine());
        int x = Integer.valueOf(s.nextLine());
        while(n > 0)
        {
            int y = Integer.valueOf(s.nextLine());
            if(y >= x)
            {
                System.out.println("YES");
            }
            else 
            {
                System.out.println("NO");
            }
            n -= 1;
        }

    }
}
