class Solution {
public:
    bool isPalindrome(long long int x) {
       if(x < 0 || (x%10 == 0 && x != 0))
       {
           return false;
       }
        
        int reverse = 0;
        while(x > reverse)
        {
            reverse = reverse * 10 + x%10;
            x = x /10;
        }
        
        return x == reverse || x == reverse/10;
    }
};
