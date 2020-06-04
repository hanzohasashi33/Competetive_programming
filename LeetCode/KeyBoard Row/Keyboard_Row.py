class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        result = []
        keyboard = "qwertyuiopasdfghjklzxcvbnm"
        
        for i in words :
            keys = [0] * 26
            for j in i :
                if j in keyboard :
                    keys[keyboard.index(j)] += 1
            keyb1 = sum(keys[:10])
            keyb2 = sum(keys[10:19])
            keyb3 = sum(keys[19:])
            print(keyb1,keyb2,keyb3,keys)
            if keyb1 > 0 and keyb2 + keyb3 == 0 :
                result.append(i)
            elif keyb2 > 0 and keyb1 + keyb3 == 0 :
                result.append(i)
            elif keyb3 > 0 and keyb1 + keyb2 == 0 :
                result.append(i)
            else :
                continue
        return result
            
