n, m, d = [int(x) for x in input().split(' ')]
c = [int(x) for x in input().split(' ')]
answer = []

platformsum = sum(c)
	
while len(answer) < (d - 1) and len(answer) < (n - platformsum):
	answer.append(0)
	
you = len(answer) + 1

safe = 0
for x in range(n):
	if safe < m :
		for y in range(c[safe]):
			answer.append(safe + 1)
			platformsum -= 1

		you += d
		you += (c[safe] - 1)
		
		for x in range(d - 1):
			if len(answer) < (n - platformsum):
				answer.append(0)
	
	safe += 1

if you >= n + 1:
	print("YES")
	for x in answer:
		print(x, end = " ")
else:
	print("NO")
