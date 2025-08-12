import sys

sys.stdin = open('input.txt','r')
sys.stdout = open('output.txt','w')

def solve():
	n,m,a,b = map(int,input().split())

	if m % (a + b) == 0:
		print('YES')
		return

	max_step = max(a,b)
	min_step = min(a,b)
	for i in range(n):
		if m >= max_step:
			m -= max_step
		else:
			m -= min_step

		if m<0:
			print('NO')
			return
	print('YES') if m == 0 else print('NO')

tc = 1
tc = int(input())
while tc > 0:
	solve()
	tc -= 1