def fun(n):
	if n%2==0:
		return '.'
	return '*'

l=[[fun(j) for j in range(5)] for i in range(5)]

print(l)