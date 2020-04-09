class Solution {
public:
    bool backspaceCompare(string S, string T) {
        if(newString(S) == newString(T))
            return true;
        else return false;
    }
    
    string newString(string S) 
    { 
        deque<char> q; 
  
        for (int i = 0; i < S.length(); ++i) { 
  
            if (S[i] != '#') 
                q.push_back(S[i]); 
            else if (!q.empty()) 
                q.pop_back(); 
        } 
  
        // build final string 
        string ans = ""; 
  
        while (!q.empty()) { 
            ans += q.front(); 
            q.pop_front(); 
        } 
  
        // return final string 
        return ans; 
    } 
};
