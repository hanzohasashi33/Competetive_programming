class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        dict = defaultdict(int)
        for i in text :
            if i in dict :
                dict[i] += 1 
            else :
                dict[i] = 1
                
        count_b = dict['b']
        count_a = dict['a']
        count_l = dict['l']
        count_o = dict['o']
        count_n = dict['n']
        print(count_b,count_a,count_l,count_o,count_n)
        result = 99999999999999999999
        result = min(result, count_b);
        result = min(result, count_a);
        result = min(result, count_l // 2);
        result = min(result, count_o // 2);
        result = min(result, count_n);
        return result
        print(dict)
        
