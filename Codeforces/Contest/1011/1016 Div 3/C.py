from os import path
import sys
import math

if (path.exists('input.txt')):

	sys.stdin = open('input.txt','r')
	sys.stdout= open('output.txt','w')


########### PROGRAM #####################
def find_factors(num):
	# factors = set()
	for i in range(1, int(math.sqrt(num)) + 1):
		if num % i == 0:
			if i != num and i != 1:
				return False
	return True

def solve():

	n , k = map(int,input().split())

	n = str(n)

	n = n*k

	n = int(n)

	factors = find_factors(n)

	if factors:
		print('YES')
	else:
		print('NO')

tc = 1
tc = int(input())

while tc > 0:

	solve()
	tc -= 1

