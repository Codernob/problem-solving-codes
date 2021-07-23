n = int(input())
for i in range(n):
    line = input()
    iter = 0
    while True:
        iter = iter + 1
        sum = int(line) + int(line[::-1])
        if str(sum)==str(sum)[::-1]:
            print(iter,sum)
            break
        line = str(sum)