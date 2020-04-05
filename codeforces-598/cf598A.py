q = int(input())

for x in range(q):
	a, b, n, s = [int(x) for x in input().split(' ')]

	x = a * n
	if x > s:
		y = s // n
		x = y * n
		
	if (x + b) < s:
		print("NO")
	else:
		print("YES")
