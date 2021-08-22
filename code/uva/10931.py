def lton(List):
    string = str()
    for i in range(len(List)):
        string= string + str(List[i])
    return string
    
def dtb(bten):
    rem = None
    Sum = 0
    binary = []
    while True:
        binary.insert(0,bten%2)
        Sum = (Sum + bten%2)
        if bten//2 == 0:
            break
        elif  bten//2 == 1:
            Sum = (Sum + bten//2)
            binary.insert(0,1)
            break
        bten//=2
    print("The parity of "+lton(binary)+" is "+str(Sum)+" (mod 2).")

while True:
    n = int(input())
    if n==0:
        break
    dtb(n)
