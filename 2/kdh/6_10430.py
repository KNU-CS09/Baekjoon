# a, b, c = map(int, input().split())

# if(1 < a < 10001 and 1 < b < 10001 and 1 < c < 10001):
# 		print((a+b)%c)
# 		print((a%c+b%c)%c)
# 		print((a*b)%c)
# 		print((a%c*b%c)%c)

import sys

RANGE_MIN = 1
RANGE_MAX = 10001

for line in sys.stdin:
	a, b, c = map(int, line.split())
	isInRange = False

	for e in {a,b,c}:
		isInRange = isInRange and (RANGE_MIN < e < RANGE_MAX)

	if isInRange:
		print((a+b)%c)
		print((a%c+b%c)%c)
		print((a*b)%c)
		print((a%c*b%c)%c)
	
	print(isInRange)
