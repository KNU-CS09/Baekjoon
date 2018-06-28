inputString = input()

loopRound = len(inputString) // 10 + 1
idx = 0

for i in range(loopRound):
	if i < loopRound:
		print(inputString[idx:idx+10])
		idx = idx + 10
	else:
		print(inputString[idx:])