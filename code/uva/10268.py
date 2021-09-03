while True:
    try:
        x = int(input())
        coe = list(map(int,input().split()))

        # the following method gives TLE
        #n = len(coe)
        #ans = 0
        # for i in range(n-1):
        #     ans += (coe[i]*(n-i-1)) * pow(x,n-i-2)

        # for optimization, we use horner's rule
        # https://en.wikipedia.org/wiki/Horner's_method
        n = len(coe) -1
        ans = n * coe[0]
        for i in range(1,n):
            ans = x*ans + (n-i)*coe[i]
        print(ans)
    except EOFError:
        break