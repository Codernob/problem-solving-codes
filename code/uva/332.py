from fractions import Fraction
c = 1
while True:
    line = input()
    if line.strip() == "-1":
        break
    j, X = line.split()
    if float(X) == 1.0:
        print("Case "+str(c)+": 1/1")
        c+=1
        continue
    if float(X) == 0.0:
        print("Case "+str(c)+": 0/1")
        c+=1
        continue
    j = int(j)
    if j==0:
        print("Case "+str(c)+": "+str(Fraction(str(X))))
        c+=1
        continue
    k = len(X[2:])-j
    repeating = X[2+k:]
    for i in range(11):
        X = X + repeating
    numerator = int(10**(j+k) * float(X)) - int(10**k * float(X))
    denominator = 10**(j+k) - 10**k
    f = Fraction(numerator,denominator)
    print("Case "+str(c)+": "+str(f.numerator)+"/"+str(f.denominator))
    c+=1