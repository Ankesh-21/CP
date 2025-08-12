import sys

# sys.stdin = open('input.txt','r')
# sys.stdout = open('output.txt','w')

def solve():
	n = int(input())
	tickets = []
	for i in range(n):
		a,b = map(int,input().split())

		if a >= 7:
			tickets.append([a,b])
	tickets.sort(key=lambda x:x[1])
	if not tickets:
		print(-1)
		return
	print(tickets[0][1])

tc = 1
tc = int(input())
while tc > 0:
	solve()
	tc -= 1