import sys

for line in sys.stdin:
	parsedInput = line.split()

	a = int(parsedInput[0])
	b = int(parsedInput[1])

	if(0 < a < 10 and 0 < b < 10):
		print(a - b)