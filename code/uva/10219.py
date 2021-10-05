from math import *
def nCr(n,r):
    p = 1
    k = 1
    if n-r<r:
        r = n-r
    if r!=0:
        while r!=0:
            p *= n
            k *= r
            q = gcd(p,k)
            p//=q
            k//=q
            n-=1
            r-=1
    else :
        p = 1
    return p

while True:
    try:
        N, K = list(map(int,input().split()))
        print(len(str(nCr(N,K))))
    except EOFError:
        break

