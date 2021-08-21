nCr = [[0 for j in range(101)] for i in range(101)]
for i in range(101):
    for j in range(i+1):
        if i==j or j==0:
            nCr[i][j] = 1
        else:
            nCr[i][j] = nCr[i-1][j-1] + nCr[i-1][j]

while True:
    n,r = list(map(int,input().split()))
    if n==0 and r==0:
        break
    print(str(n)+" things taken "+str(r)+" at a time is "+str(nCr[n][r])+" exactly.")