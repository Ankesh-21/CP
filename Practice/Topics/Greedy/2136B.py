import sys

sys.stdin = open('input.txt','r')
sys.stdout = open('output.txt','w')
'''
    // should not be all 1s
    // if there is 1 there should be one 0 in range(l -r + 1) for every 1
    // if there is consequitive k 1s then simple ans = no
'''
def solve():
    n,k = map(int,input().split())
    s = input()
    mx = -float('inf')
    cnt = 0
    for i in range(n):
        if s[i] == '1':
            cnt += 1
        else:
            cnt = 0
        mx = max(mx,cnt)
    if mx >= k:
        print('No')
        return
    else:
        print('Yes')
        ans = []
        f = 1
        l = n
        for i in range(n):
            if s[i] == '0':
                print(l,end=' ')
                l -= 1
            else:
                print(f,end=' ')
                f += 1
        print()

tc = int(input())
for _ in range(tc):
    solve()