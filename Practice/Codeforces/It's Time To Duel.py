import math
import sys

sys.stdin = open('input.txt','r')
sys.stdout = open('output.txt','w')

def solve():
    n = int(input())
    a = list(map(int,input().split()))
    firstZero = a.count(0) >= 1
    for i in range(0,n-1):
        if a[i] == a[i +1]:
            if a[i] == 1 and firstZero:
                continue
            else: 
                print('YES')
                return
        else:
            firstZero = True 
    print('NO')

tc = 1
tc = int(input())
while tc > 0:
    solve()
    tc -= 1