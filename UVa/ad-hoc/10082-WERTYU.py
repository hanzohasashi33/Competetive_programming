if __name__ == "__main__":
    
    keyboard = ['`','1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','R','T','Y','U','I','O','P','[',']',"\\",'A','S','D','F','G','H','J','K','L',';',"'",'Z','X','C','V','B','N','M',',','.','/']
    
    while True:
        try:
            n = input()
        except EOFError:
            break
    # n = input()
        output = ""
        for i in n:
            if i == ' ' or i == 'Q' or i == 'A' or i == 'Z' or i == '`' or i == '\n':
                output += i
            else:
                output += keyboard[keyboard.index(i)-1]

        print(output)
