import sys

sys.stdin = open('input.txt','r')
sys.stdout = open('output.txt','w')

def solve():
	n = int(input())
	ans = []
	for k in range(1,18):
		m = n * (10 ** k)
		if n % (10 ** k + 1) == 0:
			x = n // (10 ** k + 1)
			ans.append(x)
	print(len(ans))
	if (ans):print(*ans[::-1])

tc = 1
tc = int(input())
for _ in range(tc):
	solve()