import sys
import math

# sys.stdin = open('input.txt','r')
# sys.stdout = open('output.txt','w')

def solve():
	a = list(map(int,input().split()))
	s = sum(a)
	if s >= 35:
		print(0)
		return
	a = [10 - x for x in a]
	a.sort(reverse = True)
	ans = 0
	for el in a:
		s += el
		ans += 100

		if s >= 35:
			print(ans)
			return
	print(ans)

tc = 1
tc = int(input())
while tc > 0:
	solve()
	tc -= 1