import sys
import math

sys.stdin = open('input.txt','r')
sys.stdout = open('output.txt','w')

def Find(s,middle):
	prev = -1
	Next = -1
	n = len(s)
	i = 0
	j = len(s) - 1

	for i in range(len(s)):
		if s[i] == middle:
			prev = i;
			break
	for i in range(len(s)-1,prev-1,-1):
		if s[i] == middle:
			Next = i
			break
	print(f'first edge is {prev} and last edge is {Next}')
	return (prev,Next)

def solve():
	n = int(input())
	s = input()

	first0,last0 = Find(s,'0');
	fisrt1,last1 = Find(s,'1');

	# 4 cases will be there 
	# First case: when start 0 end 0
	if (first0 < first1 and last0 > last1):
		print()

tc = 1
tc = int(input())
for _ in range(tc):
	solve()