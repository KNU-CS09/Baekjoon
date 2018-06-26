n = int(input())
sum = 0

if 0 < n < 10001:
	for i in range(n):
		sum += i+1

	print(sum)