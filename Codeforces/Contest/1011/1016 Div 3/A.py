from os import path
import sys

if (path.exists('input.txt')):

	sys.stdin = open('input.txt','r')
	sys.stdout= open('output.txt','w')


########### PROGRAM #####################


def solve():

	n = int(input())
	if n%2 == 0:
		print('NO')
	else:
		print('YES')


tc = 1
tc = int(input())

while tc > 0:

	solve()
	tc -= 1

