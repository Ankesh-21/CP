import sys

sys.stdin = open('input.txt','r')
sys.stdout = open('output.txt','w')

def solve():
	n, k = map(int,input().split())
	a = list(map(int,input().split()))
	b = list(map(int,input().split()))

	exp = 0

	ahead = 0
	stay = 0
	steps = 1
	for i in range(min(k,len(a))):
		exp = max((ahead + a[i] + max(stay,b[i]) * (k - steps)),exp)
		stay = max(stay,b[i])
		ahead += a[i]
		steps += 1

	print(exp)

tc = 1
tc = int(input())
while tc > 0:
	solve()
	tc -= 1