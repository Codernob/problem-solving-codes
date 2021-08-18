
def fib(n):
    F0 = 0
    F1 = 1
    for i in range(n):
        F1 = F0 + F1
        F0 = F1 - F0
    return F0
while True:
    try:
        n = int(input())
        print("The Fibonacci number for "+str(n)+" is "+str(fib(n)))    
    except EOFError:
        break
