from os import path
import sys

if (path.exists('input.txt')):

	sys.stdin = open('input.txt','r')
	sys.stdout= open('output.txt','w')


########### PROGRAM #####################


def solve():

	s = input()
	n = len(s)
	nzero = 0
	zero = 0
	for i in range(n-1,-1,-1):
		if s[i] == '0':
			if nzero > 0:
				print(len(s[0:i]))
				return
			zero += 1
		else:
			nzero += 1

	print(n-1)

tc = 1
tc = int(input())

while tc > 0:

	solve()
	tc -= 1

