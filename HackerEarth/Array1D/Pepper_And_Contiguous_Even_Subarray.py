t = int(input())
while t:
    n = int(input())
    re = input().split()
    m_len = 0
    stk = 0
    for i in re:
        if int(i)&1 == 0:
            stk += 1
        else:
            stk = 0
        if (stk >=1) and (stk > m_len):
            m_len = stk
    if m_len > 0:
        print(m_len)
    else:
        print("-1")
    t -= 1
