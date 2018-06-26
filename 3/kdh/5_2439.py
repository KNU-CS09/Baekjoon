n = int(input())

if 0 <  n < 101:
	for i in range(n):
		star = ""
		for j in range(i+1):
			star = "*" + star
		for j in range(n-i-1):
			star = " " + star
		print(star)