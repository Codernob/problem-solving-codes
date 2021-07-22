
def printpyramid(grid,M,N):
    col = M * N + 1
    for i in range(M*N):
        print(grid[0][i][0:col])
        col = col + 1

def setroom(grid,x,y,M,N):
    grid[0][x] = grid[0][x][:y] + '/' + '_'*2*(M-1) + '\\' + grid[0][x][y+2*(M-1)+2:]
    for i in range(1,M):
        grid[0][x-i] = grid[0][x-i][:y+i] + '/' + ' '*(2*(M-1)-2*i) + '\\' + grid[0][x-i][y+2*(M-1)-2*i+2:]
    return grid


def setpyramid(M,N):
    grid = [[' '*(2*M*N)]*(M*N)]

    base = []

    for i in range(N):
        base.append((N*M-1,2*M*i))
        grid = setroom(grid,base[i][0],base[i][1],M,N)
    
    ds = [base]

    for i in range(2,N+1):
        temp = []
        for j in range(N-i+1):
            temp.append( ( N*M-1-(i-1)*M, (ds[i-2][j][1]+ds[i-2][j+1][1])//2 ) )
            grid = setroom(grid,temp[j][0],temp[j][1],M,N)
        ds.append(temp)

    return grid

tc = 1
while(True):
    M, N = [int(x) for x in input().split()]
    if(M ==0 and N == 0):
        break
    grid = setpyramid(M,N)
    print(f"Triangular Museum {tc}")
    printpyramid(grid,M,N)
    print()
    tc=tc+1