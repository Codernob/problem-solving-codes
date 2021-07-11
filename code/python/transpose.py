mat = [
[2, 3, 9],
[6,4,5],
[1,5,3]
]
T=[]
for i in range(3):
	for j in range(3):
		if i==0:
			T.append([])
		T[j].append(mat[i][j])
print(T)

Tr = [ [mat[i][j] for i in range(3)] for j in range(3) ]
print(Tr)