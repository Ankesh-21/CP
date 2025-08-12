import sys
import heapq

sys.stdin = open('input.txt','r')
sys.stdout = open('output.txt','w')


def solve():
	n = int(input())

	a = list(map(int,input().split()))
	for i in range(n):
		a[i] = (a[i],i)

	a.sort()
	print(a)

tc = 1
tc = int(input())
while tc > 0:
	solve()
	tc -= 1