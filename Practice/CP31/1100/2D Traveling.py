import sys

sys.stdin = open('input.txt','r')
sys.stdout = open('output.txt','w')

def solve():
	n,k,a,b = map(int,input().split())
	points = []
	majors = {}
	for i in range(n):
		x,y = map(int,input().split())
		points.append((x,y))
		if k > 0:
			majors.setdefault((x,y),1)
			k -= 1
	first = min(points[a-1],points[b-1])
	second = max(points[a-1],points[b-1])
	points.sort()

	ans = 0

	print(f'first and second = {first},{second}')
	print('points = ',points)
	start = -1
	for point in points:
		if point == first:
			start = 1
		if start == -1:
			continue
		if majors.get(point,-1) != -1 and majors.get(first,-1) != -1:
			ans += 0
		else:
			xi = point[0]
			xj = first[0]
			yi = point[1]
			yj = first[1]

			ans += abs(xi - xj) + abs(yi - yj)
		if (point == second):
			break
		first = point
	print(ans)




tc = 1
tc = int(input())
for i in range(tc):
	solve()
