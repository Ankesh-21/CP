import math

def solve():
    n = int(input())
    a = list(map(int,input().split()))
    first = abs(a[0])
    cnt = 0
    for i in range(len(a)):
        if first < abs(a[i]) and a[i] != first:
            cnt += 1
    mid = n // 2 
    # print(f'cnt = {cnt}')
    # print(f'mid = {mid}')

    smalls = n - cnt - 1
    larges = cnt

    if smalls == mid:
        print('YES')
    else:
        if smalls < mid:
            print('YES')
            return
        print('NO')


tc = 1
tc = int(input())
while tc > 0:
    solve()
    tc -= 1
