import sys
import math

sys.stdin = open('input.txt','r')
sys.stdout = open('output.txt','w')

def solve():
    n = int(input())
    a = list(map(int,input().split()))
    b = set(a)
    if len(b) < len(a):
        print('YES')
    else:
        print('NO')

tc = 1
tc = int(input())
for _ in range(tc):
    solve()