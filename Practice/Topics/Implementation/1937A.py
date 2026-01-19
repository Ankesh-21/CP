import math
def solve():
    p1,p2,p3 = map(int,input().split())
    s = p1 + p2 + p3
    if s % 2:
        print("-1")
        return
    print(min(s // 2,p1 + p2))
tc = int(input())
for _ in range(tc):
    solve()