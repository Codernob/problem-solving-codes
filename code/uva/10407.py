import math
while True:
    try:
        line = list(map(int,input().split()))
        if len(line)==1:
            break
        pd = 0
        for i in range(len(line)-2):
            pd = math.gcd(pd,abs(line[i]-line[i+1]))
        print(pd)
    except EOFError:
        break