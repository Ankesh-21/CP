import sys
import heapq
import math

# sys.stdin = open('input.txt','r')
# sys.stdout = open('output.txt','w')

def max_1(s):
    max_linear = 0
    n = len(s)
    curr = 0
    for ch in s:
        if ch == '1':
            curr += 1
            max_linear = max(max_linear,curr)
        else:
            curr = 0
    
    if max_linear == n:
        return n
    leading = 0
    while leading < n and s[leading] == '1':
        leading += 1
    trailing = 0
    while trailing < n and s[n -1 -trailing] == '1':
        trailing += 1
    
    return max(max_linear,trailing+leading)

def solve():
    s = input()
    max_cons_1 = max_1(s)
    if max_cons_1 == len(s):
        print(max_cons_1 * max_cons_1)
        return
    elif max_cons_1 == 0:
        print(0)
        return
    ans = 0
    row = 1
    for col in range(max_cons_1,-1,-1):
        ans = max(ans,row * col)
        row += 1
    
    print(ans)
tc = 1
tc = int(input())
for _ in range(tc):
    solve()