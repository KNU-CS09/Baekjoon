n = int(input())

if 0 <  n < 10:
	for i in range(1, 10):
		print('{} * {} = {}'.format(n, i, n*i))