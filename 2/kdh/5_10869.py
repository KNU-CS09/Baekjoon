import sys

for line in sys.stdin:
	a,b= map(int, line.split())

	if(0 < a < 10001 and 0 < b < 10001):
		print(a +  b)
		print(a -  b)
		print(a *  b)
		print(a // b)
		print(a %  b)