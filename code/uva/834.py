from fractions import Fraction
while True:
    try:
        n, d = list(map(int,input().split()))
        print("["+str(n//d),end="")
        f = Fraction(n,d)
        f= f - (n//d)
        if f==0:
            print("]")
            continue
        else:
            print(";",end="")
        f = 1/f
        while True:
            if f - f.numerator//f.denominator == 0:
                print(str(f.numerator//f.denominator)+"]")
                break
            print(str(f.numerator//f.denominator)+",",end="")
            f = f - f.numerator//f.denominator
            if f==0:
                break
            f = 1/f
    except EOFError:
        break