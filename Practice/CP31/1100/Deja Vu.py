import sys

# sys.stdin = open('input.txt','r')
# sys.stdout = open('output.txt','w')

def solve():

	n , Q = map(int,input().split())

	a = list(map(int,input().split()))
	x = list(map(int,input().split()))

	for q in x:
		xi = 1 << q
		for i in range(n):
			if a[i] % xi == 0:
				a[i] += (1 << (q-1))
	print(*a)




tc = 1
tc = int(input())
while tc > 0:
	solve()
	tc -= 1
