def solve():
    n = int(input())
    s = input()
    left = 0
    right = n - 1
    indices = []
    while left <= right:
        if s[left] != s[right]:
            if s[left] < s[right]:
                indices.append(left+1)
                left += 1
            else:
                indices.append(right+1)
                right -= 1
        else:
            left += 1
            right -= 1
    print(len(indices))
    print(*indices)
            
tc = int(input())
for _ in range(tc):
    solve()