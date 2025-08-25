import math
import sys

sys.stdin = open('input.txt','r')
sys.stdout = open('output.txt','w')
def exp(base:int,pow:int)->int:
    res = 1
    while pow > 0:
        if pow & 1:
            res *= base
        
        base *= base
        pow >>= 1
    return res
def Log3(n:int)->int:
    val = 1
    p = 0
    while val * 3 <= n:
        val *= 3
        p += 1
    return p
tc = 1
tc = int(input())
def solve():
    n = int(input())
    k = 1
    coins = 0
    d = {1:3}
    ans = 0
    # operations = 0
    while exp(3,k) <= n:
        coins = exp(3,k + 1) + k * exp(3,k - 1)
        d[exp(3,k)] = d.get(exp(3,k) , 0) + coins
        k += 1
    # operation += 1
    # print('d is: ',d)
    if coins != 0:
        ans += coins
        n -= exp(3,k - 1)
    while n > 1:
        # print('Entered')
        pow = Log3(n)
        # print(f'power is: {pow}')
        ans += d[exp(3,pow)]
        n -= exp(3,pow)
    if n == 1:
        ans += 3
    print(ans)
    
    
for _ in range(tc):
    solve()