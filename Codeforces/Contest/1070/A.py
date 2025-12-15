def solve():
    n = int(input())
    nums = list(map(int,input().split()))
    maxi = 0
    stack = []
    for i in range(n):
        while stack and stack[-1] < nums[i]:
           stack.pop()
        stack.append(nums[i])
    print(n - len(stack))
    # print(maxi)
tc = int(input())
for _ in range(tc):
    solve()