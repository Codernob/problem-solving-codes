while True:
    try:
        NCOW, NCAR, NSHOW = list(map(int,input().split()))
        NDOOR = NCOW + NCAR
        print("%.5f"%((NCOW*NCAR+NCAR*NCAR-NCAR)/(NDOOR*NDOOR-NDOOR-NDOOR*NSHOW)))
    except EOFError:
        break