def median(X,N):
    if N%2!=0:
        index = int((N+1)//2 -1)
        median = X[index]
        return median
    else:
        index1 = int(N//2 - 1)
        index2 = index1 + 1
        median = (X[index1]+X[index2])//2
        return median

A = []
while True:
    try:
        inp=input()
        A.append(inp)
        A.sort()
        print(median(A,len(A)))
    except EOFError:
        break
