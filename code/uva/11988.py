# TLE

while True:
    try:
        line = input()
        List = []
        idx = 0
        for i in range(len(line)):
            if line[i]=='[':
                idx = 0
            elif line[i]==']':
                idx = -1
            else:
                if idx == -1:
                	List.append(line[i])
                else:
                    List.insert(idx,line[i])
                    idx+=1
        for i in range(len(List)):
        	print(List[i],end='')
        print()
    except EOFError:
        break