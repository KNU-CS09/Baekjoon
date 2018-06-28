import sys

loopRound = int(sys.stdin.readline().strip('\n'))

for i in range(loopRound):
	input = sys.stdin.readline().strip('\n').split()
	print(int(input[0]) + int(input[1]))