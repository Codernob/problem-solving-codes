def num(string):
    l = len(string)
    for i in range(1,l+1):
        if l % i != 0:
            continue
        comparable = string[0:i]
        flag = True
        for j in range(0,l,i):
            if comparable != string[j:j+i]:
                flag = False
                break
        if flag==True:
            return i

n = int(input())
input()
for i in range(n):
    line = input()
    if i==n-1:
    	print(num(line))
    else:
    	print(str(num(line))+"\n")
    if(i!=n-1):
        input()