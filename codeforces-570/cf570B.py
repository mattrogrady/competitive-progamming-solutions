q = int(input())

for x in range(q):
	products, k = [int(x) for x in input().split(' ')]
	prices = [int(x) for x in input().split(' ')]
	
	prices.sort()
	min = prices[0]
	max = prices[len(prices) - 1]
	
	equalized = min + k
	
	if ((min + k) < (max - k)):
		print(-1)
	else:
		print(equalized)
	