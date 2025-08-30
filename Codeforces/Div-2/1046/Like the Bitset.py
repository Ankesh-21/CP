import sys
sys.stdin = open('input.txt','r')
sys.stdout = open('output.txt','w')

def solve():
    n,k = map(int,input().split())
    s = input()
    # from first 
    last_one = n
    first_one = -1
    for i in range(n):
        if s[i] == '1':
            first_one = i
            break
    for i in range(n-1,-1,-1):
        if s[i] == '1':
            last_one = i
            break
    left = first_one
    right = last_one
    zero = -1
    if (left == right):
        zero = left + 1 if left + 1 < n else left - 1
    for i in range(left + 1, right):
        if s[i] == '0':
            if i - left + 1 > k and right - i + 1 > k:
                zero = i
                break
            elif i - left + 1 <= k:
                continue
            else:
                print('here')
                print('No')
                return
    
    if zero == -1:
        print('No')
        return
    ans = [0 for _ in range(n)]
    ans[zero] = n
    num = n - 1
    for i in range(n):
        if i != zero:
            ans[i] = num
            num -= 1
    print('Yes')
    print(*ans)
tc = int(input())
for _ in range(tc):
    solve()