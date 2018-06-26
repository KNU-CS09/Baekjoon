n = int(input())

if 0 <  n < 101:
	for i in range(n):
		star = ""
		for j in range(n-i):
			star += '*'
		print(star)