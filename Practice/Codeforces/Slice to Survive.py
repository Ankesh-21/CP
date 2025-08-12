import math
import sys

sys.stdin = open('input.txt','r')
sys.stdout = open('output.txt','w')

def cut(a):
	cnt = 0
	while a > 1:
		a = (a + 1) // 2
		cnt += 1
	return cnt

def solve():
    
	n, m, a, b = map(int,input().split())
	vercut = cut(min(b,(m - b + 1))) + cut(n) + 1
	horcut = cut(min(a,(n - a + 1))) + cut(m) + 1

	print(min(horcut , vercut))
	
tc = 1
tc = int(input())
while tc > 0:
    solve()
    tc -= 1