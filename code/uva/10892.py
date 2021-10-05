import math
def lcm(a,b):
    return (a*b)/math.gcd(a,b)
def divisors(n):
    d = []
    i = 1
    while i*i<=n: #running loop upto sqrt(n)
        if n%i == 0:
            if n//i ==i:
                d.append(i) # avoding saving same divisor twice
            else:
                d.append(i)
                d.append(n//i)
        i+=1
    return d

while True:
    N = int(input())
    if N==0:
        break
    div = divisors(N) # generating list of all divisors of N
    l = len(div)
    C = 0
    #testing all pairs of integers in div
    for i in range(l):
        for j in range(i): # avoiding counting same pair twice [(a,b) and (b,a) are same]
            if lcm(div[i],div[j])==N:
                C+=1
    print(N,C+1) # C+1 for the extra case where lcm(N,N)=N
