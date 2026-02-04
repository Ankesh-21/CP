def solve():
    n = int(input())
    mini = 1
    maxi = n
    ans = []
    turn = 0
    while n > 0:
        if turn % 2 == 0:
            ans.append(maxi)
            maxi -= 1
        else:
            ans.append(mini)
            mini += 1
        turn += 1
        n -= 1
    print(*ans[::-1])
tc = 1
tc = int(input())
while tc > 0:
    solve()
    tc -= 1