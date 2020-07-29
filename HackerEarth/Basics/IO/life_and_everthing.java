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
        while(true)
        {
            int num = Integer.valueOf(s.nextLine());
            if(num == 42)
            {
                break;
            }
            else 
            {
                System.out.println(num);
            }
        }
    }
}
