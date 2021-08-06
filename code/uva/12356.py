while True:
    S,B = list(map(int,input().split()))
    if S == 0 and B == 0:
        break
    l = []
    l.append('*')
    l.extend([i for i in range(1,S+1)])
    l.append('*')
    for i in range(B):
        L,R = list(map(int,input().split()))
        print( str(l[l.index(L)-1]) + " " + str(l[l.index(R)+1]) )
        for j in range(L,R+1):
            l.remove(j)
    print("-")