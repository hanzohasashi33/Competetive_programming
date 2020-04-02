class Solution 
{
    public:
        bool isHappy(int n) 
        {
            while(n != 1 && n != 4)
            {
                n = squarenum(n);
            }
            if(n == 1) return true;
            else return false;
        }
    
        
        int squarenum(int n)
        {
            int rem = 0,sum = 0;
            while(n > 0)
            {
                rem = n%10;
                sum += (rem * rem);
                n = n/10;
            }
            return sum;
        }
};
