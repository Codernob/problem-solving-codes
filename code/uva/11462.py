while True:
    n = int(input())
    if n==0:
        break
    A = list(map(int,input().split()))
    A.sort()
    for i in range(n):
        if i==n-1:
            print(A[i])
        else:
            print(A[i],end=' ')