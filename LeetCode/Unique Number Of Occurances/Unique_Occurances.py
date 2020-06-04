class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        dict = {}
        for i in arr :
            if i in dict :
                dict[i] += 1
            else :
                dict[i] = 1
                
        count = 0
        s = set(dict.values())
        ns = len(s)
        nl = len(dict.values())
        
        if nl != ns :
            return False
        else :
            return True
