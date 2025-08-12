import sys

sys.stdin = open('input.txt','r')
sys.stdout = open('output.txt','w')
def BS(a,b,left):
	# b = list(set(b))
	# b.sort()
	# print(b)
	cnt = 0
	n = len(b)
	l = left
	r = n - 1
	while l <= r:
		mid = l + (r - l)//2
		if b[mid] < a:
			l = mid + 1
			cnt += 1
		else:r = mid - 1
	return cnt

def solve():
	n = int(input())
	a = list(map(int,input().split()))
	b = list(map(int,input().split()))

	# a.sort()
	b.sort()
	print(a)
	print(b)
	pr = [0 for _ in range(n)]

	lastSml = float('inf')

	# for i in range(n-1,-1,-1):
	# 	combinations *= BS(a[i],b)


	combinations = 1
	for i in range(n):
		if a[i] <= b[i]:
			print(0)
			return
		else:
			combinations *= BS(a[i],b,i)
	print(4 * combinations)



tc = 1
tc = int(input())
while tc > 0:
	solve()
	tc -= 1
