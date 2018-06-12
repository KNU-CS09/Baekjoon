import sys
for line in sys.stdin:
    parsedInput = line.split()

    a = int(parsedInput[0])
    b = int(parsedInput[1])

    if(a > 0 and b < 10):
        print(a + b)