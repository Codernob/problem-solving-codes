from fractions import Fraction
T = int(input())
for i in range(T):
	n = int(input())
	print("Case "+str(i+1)+": "+str(Fraction(n*n-n,4)))