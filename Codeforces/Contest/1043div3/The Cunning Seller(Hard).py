import sys
import math

sys.stdin = open('input.txt','r')
sys.stdout = open('output.txt','w')

def exp(base:int,pow:int)->int:
    res = 1
    while pow > 0:
        if pow & 1:
            print(res , pow)
            res *= base
        base *= base
        pow >>= 1
    return res
def intLog3(n:int):
    pow = 0
    fraction = 1
    while fraction * 3 <= n:
        fraction *= 3
        pow += 1
    return pow

def solve():
    # a = list(map(int,input().split()))
    n,k = map(int,input().split())
    left:int = 1
    right:int = k

    while left <= right:
        mid = left + (right - left) // 2
        while mid > 0:
            

tc = int(input())
for _ in range(tc):
    solve()