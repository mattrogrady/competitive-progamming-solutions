num = int(input())
interesting = False

num1 = 0

while (interesting == False):
	if (num >= 9 and num <= 99):
		num1  = (num % 10) + (num // 10)
		if (num1 % 4 == 0):
			interesting = True
		else:
			num += 1

	elif (num > 99 and num <= 999):
		num1 = (num % 10) + ((num // 10) % 10) + (num // 100)
		if (num1 % 4 == 0):
			interesting = True
		else:
			num += 1

	elif (num > 999):
		num = 1003
		interesting = True

	else:
		if (num > 4):
			num = 8
			interesting = True
		else:
			num = 4
			interesting = True

print(num)
	