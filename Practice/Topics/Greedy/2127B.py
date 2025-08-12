import sys
import math

sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

def solve():
	n,x = map(int,input().split())

	s = input()

	distleft = 0
	distright = 0
	lefthash = 0
	leftnearest = 1e9
	for i in range(x-1,-1,-1):
		if s[i] == '#':
			lefthash += 1
			if leftnearest == 1e9:
				leftnearest = i
		distleft += 1
	righthash = 0

	rightnearest = -1
	for i in range(x-1,n):
		if (s[i] == '#'):
			righthash += 1
			if rightnearest == -1:
				rightnearest = i
		distright += 1
	if (lefthash == 0 and righthash == 0):
		print('1')
		return
	
	if (x - leftnearest < rightnearest - x):
		print(distleft)
	else : print(distright)


tc = 1
tc = int(input())
for _ in range(tc):
	solve()