def printresult(n):
    sum = 0
    for i in range(1,n//2+1):
        if(n%i==0):
            sum+=i
    if(sum==n):
        print((5-len(str(n)))*" "+str(n)+"  PERFECT")
    elif(sum<n):
        print((5-len(str(n)))*" "+str(n)+"  DEFICIENT")
    else:
        print((5-len(str(n)))*" "+str(n)+"  ABUNDANT")

done = False
print("PERFECTION OUTPUT")
while True:
	line = list(map(int,input().split()))
	for num in line:
		if num==0:
			done = True
			break
		else:
			printresult(num)
	if done:
		break
print("END OF OUTPUT")