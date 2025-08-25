import sys
import math
# sys.stdin = open('input.txt','r')
# sys.stdout = open('output.txt','w')
def solve():
    n = int(input())
    a = list(map(int,input().split()))
    a.sort()
    ans = 0
    i = n - 1
    add = False
    while i >= 0:
        one = a[i]
        if (i- 1 >= 0):
            two = a[i - 1]
        else:
            add = True
            break
        ans += max(one,two)
        i -= 2
    if add:
        ans += a[0]
    print(ans)
        
tc = int(input())
for _ in range(tc):
    solve()