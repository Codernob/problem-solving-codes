def rev(c):
    if c=='A':
        return 'A'
    elif c=='E':
        return '3'
    elif c=='H':
        return 'H'
    elif c=='I':
        return 'I'
    elif c=='J':
        return 'L'
    elif c=='L':
        return 'J'
    elif c=='M':
        return 'M'
    elif c=='O':
        return 'O'
    elif c=='S':
        return '2'
    elif c=='T':
        return 'T'
    elif c=='U':
        return 'U'
    elif c=='V':
        return 'V'
    elif c=='W':
        return 'W'
    elif c=='X':
        return 'X'
    elif c=='Y':
        return 'Y'
    elif c=='Z':
        return '5'
    elif c=='1':
        return '1'
    elif c=='2':
        return 'S'
    elif c=='3':
        return 'E'
    elif c=='5':
        return 'Z'
    elif c=='8':
        return '8'
    else:
        return 'invalid'

def ismir(string):
    temp=''
    for i in range(len(string)):
        temp = temp + rev(string[i])
    if temp==string[::-1]:
        return True
    else:
        return False

def ispal(string):
    if string==string[::-1]:
        return True
    return False

while True:
    try:
        line = input()
        isp = ispal(line)
        ism = ismir(line)
        if isp==False and ism==False:
            print(line+" -- is not a palindrome.\n")
        elif isp==True and ism==False:
            print(line+" -- is a regular palindrome.\n")
        elif isp==False and ism==True:
            print(line+" -- is a mirrored string.\n")
        elif isp==True and ism==True:
            print(line+" -- is a mirrored palindrome.\n")
    except EOFError:
        break