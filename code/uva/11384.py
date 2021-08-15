import math
while True:
    try:
        N = int(input())
    except EOFError:
        break
    print(1+math.floor(math.log2(N)))