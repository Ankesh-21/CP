import math
def solve():
    n,x,y = map(int,input().split())
    '''
    excludes = {}
    for i in range(1,n+1):
        if (i % x == 0 and i%y == 0):
            excludes[i-1] = excludes.get(i-1,0) + 1
    ans = 0
    # check if that position shared or not
    # not the element
    m = n
    for i in range(x-1,n,x):
        if excludes.get(i,0) == 0:
            ans += m
            m -= 1
    k = 1
    for i in range(y-1,n,y):
        if excludes.get(i,0) == 0:
            ans -= k
            k += 1
    # for i in range(n):
    #     if ans[i] == -1:
    #         ans[i] = m
    #         m -= 1
    print(ans)
    '''
    ans = 0
    m = n
    k = 1
    for i in range(1,n+1):
        if i % x == 0 and i % y == 0:
            continue
        elif i % x == 0:
            ans += m
            m -= 1
        elif i % y == 0:
            ans -= k 
            k += 1
    print(ans)
tc = int(input())
while tc > 0:
    solve()
    tc -= 1