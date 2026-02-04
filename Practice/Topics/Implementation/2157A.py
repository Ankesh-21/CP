def solve():
    n,x,y = map(int,input().split())
    s = input()
    eight = [[-1,-1],[0,1],[1,1],[1,0],[1,-1],[0,-1],[-1,-1],[-1,0]]
    four = [[0,1],[1,0],[0,-1],[-1,0]]
    
tc = 1
tc = int(input())
for i in range(tc):
    solve()