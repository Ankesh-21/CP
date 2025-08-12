import sys

# sys.stdin = open('input.txt','r')
# sys.stdout = open('output.txt','w')

def recur(n,m,a,b,dp):
	if n == 0:
		if m == 0:
			return True
		return False
	if m <= 0:
		return False
	if dp[n][m] != -1:
		return dp[n][m] == 1
	first = recur(n-1,m-a,a,b,dp)
	second = recur(n-1,m-b,a,b,dp)
	dp[n][m]= 1 if first or second else 0
	return dp[n][m] == 1
def solve():
	n,m,a,b = map(int,input().split())

	dp = [[-1 for _ in range(m+1)]for _ in range(n+1)]
	if recur(n,m,a,b,dp):
		print('YES')
		return
	print('NO')

tc = 1
tc = int(input())
while tc > 0:
	solve()
	tc -= 1