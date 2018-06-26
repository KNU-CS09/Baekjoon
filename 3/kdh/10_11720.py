number = int(input())
setOfNumber = input()
sum = 0

if 0 < number < 101:
	for i, c in enumerate(setOfNumber):
		sum += int(c)
		
	print(sum)