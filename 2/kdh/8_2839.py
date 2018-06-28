n = int(input())
number = n

for i in range(n//5, -1, -1):
	if n < 3 or  n > 5000:
		print(-1)
		break

	if n%5 == 0:
		print(i)
		break
	
	number = n - 5*i

	if number%3 == 0:
		print(i + number//3)
		break

	if i == 0:
		print(-1)