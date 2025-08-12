# import sys

# sys.stdin = open('input.txt','r')
# sys.stdout = open('output.txt','w')

def isPrime(n):
	if n <= 1:
		return False

	for i in range(2,n):
		if i*i > n:
			return True

		if n%i == 0:
			return False
	return True

def solve():

	x,k = map(int,input().split())

	if  k > 1 and x > 1:
		print('NO')
		return

	elif k==1:
		if isPrime(x):
			print('YES')
			return
		else:
			print('NO') 
			return
	elif k>2:
		print('NO')
		return

	print('YES')
	return


tc = 1
tc = int(input())
while tc > 0:
	solve()
	tc -= 1