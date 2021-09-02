#TLE; need to use horne's method
while True:
    try:
        x = int(input())
        coe = list(map(int,input().split()))
        n = len(coe)
        ans = 0
        for i in range(n-1):
            ans += (coe[i]*(n-i-1)) * pow(x,n-i-2)
        print(ans)
    except EOFError:
        break