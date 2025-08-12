import sys

# sys.stdin = open('input.txt','r')
# sys.stdout = open('output.txt','w')

def solve():
	n = int(input())
	a = list(map(int,input().split()))

	ans = 0
	for k in range(1,n+1):
		if (n % k) != 0:
			continue
		left = 0
		right = 0
		s = 0
		maxi = -float('inf')
		mini = float('inf')
		while right < n:
			if (right - left + 1) > k:
				maxi = max(maxi,s)
				mini = min(mini,s)
				s = 0
				left = right
			s += a[right]
			right += 1

		maxi = max(maxi,s)
		mini = min(mini,s)
		ans = max(ans,maxi - mini)
	print(ans)


tc = 1
tc = int(input())
while tc > 0:
	solve()
	tc -= 1
