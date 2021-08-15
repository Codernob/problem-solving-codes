from fractions import Fraction

S = int(input())

for i in range(S):
    line = list(map(int,input().split()))
    N = line[0]
    a = line[1:]
    sum = Fraction(0,1)
    for j in range(N):
        sum = Fraction(str(sum + Fraction(1,a[j])))
    H = Fraction(N,sum)
    print("Case "+str(i+1)+": "+str(H.numerator)+"/"+str(H.denominator))