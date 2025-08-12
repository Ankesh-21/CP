import sys

sys.stdin = open('input.txt','r')
sys.stdout = open('output.txt','w')

def solve():
	
	n = int(input())
	a = list(map(int,input().split()))
	adash = list(map(int,input().split()))

	# print(a)

	first = - 1
	last = -1
	d = {}

	mini = (int)(10**9)
	maxi = -float('inf')

	for i in range(n):
		if a[i] != adash[i]:
			if first == -1:
				first = i
			last = i

			# d[a[i]] = d.get(a[i],0) + 1
			mini = min(mini,a[i])
			maxi = max(maxi,a[i])
	left = first
	right = last
	for i in range(first-1,-1,-1):
		if adash[i] <= adash[left]:
			left -= 1
		else:
			break
	for i in range(last+1,n):
		if adash[i] >= adash[right]:
			right += 1
		else:
			break

	# if first != -1 and last != -1:				
	# 	print(f'first = {a[first]}')
	# 	print(f'last = {a[last]}')

	print(left + 1,right + 1)



tc = 1
tc = int(input())

for _ in range(tc):
	solve()