def nof(num):
    nod = 0
    bound = int(num**0.5)+1
    for i in range(1,bound):
        if num%i==0:
            if num/i == i:
                nod += 1
            else:
                nod +=2
    return nod
N = int(input())
for i in range(N):
    L, U = list(map(int,input().split()))
    max=0
    maxnum=0
    for i in range(L,U+1):
        ni=nof(i)
        if ni>max:
            max=ni
            maxnum=i
    print("Between "+str(L)+" and "+str(U)+", "+str(maxnum)+" has a maximum of "+str(max)+" divisors.")
