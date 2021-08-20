def printresult(n):
    if n==1:
        print((5-len(str(n)))*" "+str(n)+"  DEFICIENT")
        return
    divisors = {1}
    for i in range(2,n//2 +1):
        if(n%i==0):
            divisors.add(i)
    if(sum(divisors)==n):
        print((5-len(str(n)))*" "+str(n)+"  PERFECT")
    elif(sum(divisors)<n):
        print((5-len(str(n)))*" "+str(n)+"  DEFICIENT")
    else:
        print((5-len(str(n)))*" "+str(n)+"  ABUNDANT")


line = list(map(int,input().split()))
print("PERFECTION OUTPUT")
for num in line:
    if num==0:
        print("END OF OUTPUT")
        break
    printresult(num)