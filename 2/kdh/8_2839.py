def isPossible(x):
	if x < 3 or x > 5000:
		return False
	elif x%5 == 0:
		return True
	elif x%3 == 0:
		return True
	elif x > 5:
		number = x
		for i in range(x//5, 0, -1):
			number -= 5

			if number%3 == 0:
				return True
		return False
	else:
		return False

# N = int(input())

# 봉지는 3킬로그램 봉지와 5킬로그램 봉지
# 최대한 적은 봉지를 들고 가려고 한다
# 예를 들어, 18킬로그램 설탕을 배달해야 할 때, 3킬로그램 봉지 6개를 가져가도 되지만, 5킬로그램 3개와 3킬로그램 1개를 배달하면, 더 적은 개수의 봉지를 배달할 수 있다.

# print(isPossible(N))

for i in range(50):
	if isPossible(i):
		print(i, 'is possible')

# 5로 나눠지거나 3으로 나눠지거나 8로 나눠지거나
# if 3 <= N <= 5000:
# 	if N%5 == 0 or N%3 == 0 or N%8 == 0:
# 		print(N, 'can be divided')

	# for i in range(N%5):
	# 	for j in range(N%3):
	# 		print(i, j)


	# 안나눠지는 경우
	# N != 5*x + 3*y

	# if (N // 5) == 1:
	# 	N = N-6
	# 	print(N//5)

# 3 5 6 8 9 10 11 12 13 15 16 18 19 20 21 22 
# 3   6   9       12    15    18       21
#   5       10          15          20
#       8      11    13    16    19       22