digits = {
    0:"0",
    1:"1",
    2:"2",
    3:"3",
    4:"4",
    5:"5",
    6:"6",
    7:"7",
    8:"8",
    9:"9",
    10:"A",
    11:"B",
    12:"C",
    13:"D",
    14:"E",
    15:"F"
    }

def tenbaseton(num,n):
    result = ""
    while num!=0:
        result += digits[num%n]
        num=num//n
    result = result[::-1]
    if result == "":
        return "0"
    return result

while True:
    try:
        number, source, destination = input().split()
        if source == destination :
            ten = str(int(number,int(source)))
            ans = tenbaseton(int(ten),int(destination))
        elif destination == "10":
            ans = str(int(number,int(source)))
        elif source == "10":
            ans = tenbaseton(int(number),int(destination))
        else:
            ten = str(int(number,int(source)))
            ans = tenbaseton(int(ten),int(destination))
        if len(ans)>7:
            print("  ERROR")
        else:
            print(" "*(7-len(ans))+ans)
    except  EOFError:
        break