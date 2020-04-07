class Solution:
    def countElements(self, arr: List[int]) -> int:
        arr.sort()
        c = Counter(arr)
        #print(arr)
        #print(c)
        setted = set(arr)
        setted = list(setted)
        #print(setted)
        count = 0 
        for i in range(0,len(setted) - 1) :
            if setted[i] + 1 == setted[i+1] :
                count += c[setted[i]]
        return count
