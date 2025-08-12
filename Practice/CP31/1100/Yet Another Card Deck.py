import sys
import math
from collections import deque

# sys.stdin = open('input.txt','r')
# sys.stdout = open('output.txt','w')

def solve():
	n,q = map(int,input().split())
	a = list(map(int,input().split()))
	qry = list(map(int,input().split()))
	dq = deque()

	ans = []
	for i in range(n):
		dq.append(i)

	for qr in qry:
		arr = []
		while a[dq[0]] != qr:
			arr.append(dq.popleft())
		ans.append(len(arr) + 1)
		ind = dq.popleft()
		for j in range(len(arr)-1,-1,-1):
			dq.appendleft(arr[j])
		dq.appendleft(ind)
		# print(f'dq now at {qr} is: ',dq)
	print(*ans)
tc = 1
# tc = int(input())
for _ in range(tc):
	solve()