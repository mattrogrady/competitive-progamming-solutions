q = int(input())

for x in range(q):
	charge, turns, a, b = [int(x) for x in input().split(' ')]
	
	
	if ((a * turns) <= (charge)):
		turnsA = turns
		turnsB = 0
		while ((turnsA * a) + (turnsB * b) >= charge):
			turnsA -= 1
			turnsB += 1
		answer = turnsA
	else:
		turnsA = 0
		turnsB = turns
		while (((a * turnsA) + (b * turnsB) < charge) and (turnsA <= turns)):
			turnsA += 1
			turnsB -= 1
		answer = turnsA - 1
	
	if ((b * turns) >= charge):
		print(-1)
	else:
		print(answer)