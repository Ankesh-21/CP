import math
def solve():
    a,b,c,d = map(int,input().split())
    s = ''
    for i in range(1,13):
        if i == a or i == b:
            s += 'a'
        if i == c or i == d:
            s += 'b'
    if s == 'abab' or s == 'baba':
        print('Yes')
        return
    print('No')
tc = 1
tc = int(input())
for _ in range(tc):
    solve()