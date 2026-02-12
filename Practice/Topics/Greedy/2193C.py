import math
def solve():
    n,q = map(int,input().split())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    maxi = []
    ps = [0 for _ in range(n)]
    for i in range(n-1,-1,-1):
        if (i + 1 >= n):
            a[i] = max(a[i],b[i])
            continue
        a[i] = max(a[i+1],b[i],a[i])
    # print(*a)
    ps[0] = a[0]
    for i in range(1,n):
        ps[i] = a[i] + ps[i - 1]
    def getMax(l,r):
        nonlocal n

        if (l == 0):
            return ps[r]
        if r == n - 1:
            return ps[r] - ps[l-1]
        sum1 = ps[l - 1] 
        sum2 = ps[r]
        return sum2 - sum1
    while q > 0:
        l,r = map(int,input().split())
        maxi.append(getMax(l-1,r-1))
        q -= 1
    print(*maxi)

tc = 1
tc = int(input())
while tc > 0:
    solve()
    tc -= 1