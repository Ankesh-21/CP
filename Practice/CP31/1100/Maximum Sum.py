import sys

# sys.stdin = open('input.txt','r')
# sys.stdout = open('output.txt','w')

def solve():
	n,k = map(int,input().split())
	a = list(map(int,input().split()))
	ans = -float('inf')
	a.sort()

	total = sum(a)
	ps = [0 for _ in range(n)]
	ss = [0 for _ in range(n)]
	ps[0] = a[0]
	ss[n-1] = a[n-1]
	
	for i in range(1,n):
		ps[i] = ps[i-1] + a[i]
	for i in range(n-2,-1,-1):
		ss[i] = ss[i+1] + a[i]
	# print(ps)
	# print(ss)
	for i in range(k+1):
		mini = ps[(2*i)-1] if (2*i) -1 >=0 else 0
		maxi = ss[n-(k - i)] if (n-k+i) < n else 0
		# print(mini)
		# print(maxi)
		ans= max(ans,total - (mini+maxi))


	print(ans)
tc = 1
tc = int(input())
while tc > 0:
	solve()
	tc -= 1
