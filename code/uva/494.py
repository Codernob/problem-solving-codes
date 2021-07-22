while True:
    try:
        line = input()
        count = 0 #number of words in the line
        flag = True #True if I'm in a new word, false if the current word is processing
        for character in line:
            character = character.lower()
            if(character.islower()==True): #checking if character is an alphabet
                if(flag==True): 
                    count = count + 1 #increasing word count for a new word
                flag = False #so the current word is processing now
            else:
                flag = True # since current character is not an alphabet, we start a new word
        print(count)
    except EOFError:
        break
