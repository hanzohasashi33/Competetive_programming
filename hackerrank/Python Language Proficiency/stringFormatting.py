def print_formatted(number):
    # your code goes here
    binNumber = bin(number)[2:]
    
    
    for i in range(1,number+1):
        octalNum = oct(i)[2:]
        hexNum = hex(i)[2:].upper()
        binNum = bin(i)[2:]
        print("{} {} {} {}".format(str(i).rjust(len(binNumber),' '),octalNum.rjust(len(binNumber),' '),hexNum.rjust(len(binNumber),' '),binNum.rjust(len(binNumber),' ')))
        
    # oct(i)[2:].rjust(len(oct[number][2:]),' '),hex(i)[2:].rjust(len(hex(number),' ')),bin(i)[2:].rjust(len(bin(number)[2:]),' ')))

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)
