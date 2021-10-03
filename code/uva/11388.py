# given G, L, we have to find a,b such that gcd(a,b)=G and lcm(a,b)=L

# finding a
# here gcd(a,b)=G follows that a%G=0
# since a needs to be minimum (according to problem statement),
# the lowest a that satisfies a%G=0 is G [ for example, 12%12=0 but 11%12!=0]
# therefore a is equal to G

# finding condition for existence of solution
# for there a solution to exist, lcm(a,b) must also be equal to L
# lcm(a,b)=L follows that L%a=0
# since a=G, L%G=0 [condition for existence of solution]

# finding b
# gcd(a,b) x lcm(a,b) = a x b [property of gcd and lcm]
# or, G x L = a x b [since gcd(a,b)=G and lcm(a,b)=L ]
# or, a x L = a x b [since G=a]
# or, b = L

T = int(input())
for i in range(T):
    G , L = list(map(int,input().split()))
    if L%G==0:
        print(G,L)
    else:
        print("-1")