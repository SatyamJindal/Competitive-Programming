t=int(input())
for I in range(t):
    n=int(input())
    fin=[int(i) for i in input().split()]
    glo=[int(i) for i in input().split()]
    lef=1
    rig=1
    for i in range(len(fin)):
        if(fin[i]>glo[i]):
            lef=0
            break
    j=0
    for i in range(len(fin)-1,-1,-1):
        if(fin[i]>glo[j]):
            rig=0
            break
        j+=1
    if(lef==1 and rig==1):
        print('both')
    elif(lef==1):
        print('front')
    elif(rig==1):
        print('back')
    else:
        print('none')
