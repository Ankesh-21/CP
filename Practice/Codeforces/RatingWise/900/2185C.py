import math
import copy
def solve():
    n = int(input())
    a = list(map(int,input().split()))
    b = list(set(a))
    b.sort()
    curr = 0
    best = 0
    for i in range(len(b)):
        if i == 0 or b[i] != b[i-1] + 1:
            curr = 0
        curr += 1
        best = max(best,curr)
    print(best)
    
tc = int(input())
for _ in range(tc):
    solve()