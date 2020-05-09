def minion_game(string):
    # your code goes here
    #string = string.lower()
    vowel = ['A','E','I','O','U']
    kev = 0
    stu = 0
    n = len(string)
    x = n
    for i in range(n) :
        if string[i] in vowel :
            kev += x 
        else :
            stu += x 
        x -= 1
    
    if kev > stu :
        print("Kevin",str(kev))
    elif kev < stu :
        print("Stuart",str(stu))
    else :
        print("Draw")


if __name__ == '__main__':
    s = input()
    minion_game(s)
