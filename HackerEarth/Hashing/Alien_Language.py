# Write your code here
# Python 3 program to check if two  
# strings have common substring 

max_char = 26

def twostrings(str1,str2) :
    v = [0] * (max_char)

    for i in range(len(str1)) :
        v[ord(str1[i]) - ord('a')] = True

    for i in range(len(str2)) :
        if v[ord(str2[i]) - ord('a')] :
            return True 
    
    return False


if __name__ == "__main__":
    test = int(input())
    while test > 0 :
        str1 = input()
        str2 = input()
        if twostrings(str1,str2) :
            print("YES")
        else :
            print("NO")
        test -= 1
