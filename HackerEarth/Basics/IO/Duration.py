# Write your code here
test = int(input())
while test > 0 :
    sh,sm,eh,em = map(int,input().split())
    dur = (eh*60+em) - (sh*60+sm)
    print(dur//60,end=' ')
    print(dur%60)
    test -= 1
