class Solution:
    def numJewelsInStones(self, J: str, S: str) -> int:
        dict_j = {}
        count = 0
        dict_s = {}
        for i in J :
            if i in dict_j : 
                dict_j[i] += 1
            else :
                dict_j[i] = 1
        for i in S :
            if i in dict_s : 
                dict_s[i] += 1
            else :
                dict_s[i] = 1
        for i in dict_j.keys() :
            if i in dict_s.keys() :
                count += dict_s[i]
        #print(dict_j)
        #print(dict_s)
        return count
    
