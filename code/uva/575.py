while True:
    n = input()
    if(n=="0"):
        break
    dec = 0
    length = len(n)
    for i in range(length):
        dec = dec + int(n[i])*(2**(length-i)-1)
    print(dec)
