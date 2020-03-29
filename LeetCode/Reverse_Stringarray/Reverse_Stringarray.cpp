class Solution {
public:
    int first = 0;
    void reverseString(vector<char>& s) 
    {
        if(!s.size()) return;
        if(first < s.size() - first - 1)
        {
            char temp = s[first];
            s[first] = s[s.size() - first - 1];
            s[s.size() - first - 1] = temp;
            first++;
            return reverseString(s);
        }
        else return;
    }
};
