for i in range(int(input())):
    primelist = lambda n : [x for x in range(2, n+1) if not 0 in [x % z for z in range(2, int(x**0.5+1))]]
    print(primelist(int(input())))