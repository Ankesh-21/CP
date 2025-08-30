import sys
sys.stdin = open('input.txt','r')
sys.stdout = open('output.txt','w')
def solve():
    a,b,c,d = map(int,input().split())
    min_first = min(a,b)
    max_first = max(a,b)
    while min_first > 0:
        max_first -= 2
        min_first -= 1
    if max_first >= 3:
        print('No')
        return
    c -= a
    d -= b
    max_sec = max(c,d)
    min_sec = min(c,d)
    while min_sec > 0:
        max_sec -= 2
        min_sec -= 1
    if max_sec >= 3:
        print('No')
        return
    print('Yes')
# 2 1 2 1 2 1 2 1 

tc = 1
tc = int(input())
for _ in range(tc):
    solve()