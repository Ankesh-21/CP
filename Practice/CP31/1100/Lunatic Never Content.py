import sys
import math
import heapq

sys.stdin = open('input.txt','r')
sys.stdout = open('output.txt','w')

def solve():
	n = int(input())
	a = list(map(int,input().split()))
	if n == 1:
		print(0)
		return 

	num = abs(a[0] - a[n-1])
	i = 0
	j = n - 1
	k = 1
	diff = []
	while i <= j:
		d = abs(a[i]-a[j])
		if d != 0:
			diff.append(d)
		i += 1
		j -= 1
	if not diff:
		print(0)
		return 
	g = diff[0]
	for d in diff[1:]:
		g = math.gcd(g,d)
	print(g)
	return

tc = 1
tc = int(input())
for _ in range(tc):
	solve()