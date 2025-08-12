# import sys

# sys.stdin = open('input.txt','r')
# sys.stdout = open('output.txt','w')

def solve():

	n= input()
	m = len(n)
	nonzero = False
	cnt_zros = 0
	for i in range(m-1,-1,-1):
		if n[i] !='0':
			nonzero = True
		elif nonzero :
			cnt_zros += 1

	print(len(n) - (cnt_zros+1))

tc = 1
tc = int(input())
while tc > 0:
	solve()
	tc -= 1