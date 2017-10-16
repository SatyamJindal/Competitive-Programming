t=int(input())
for I in range(t):
    n=int(input())
    c1=0
    c2=0
    c3=0
    c4=0
    c5=0
    c6=0
    c7=0
    for i in range(n):
        s=input()
        if(s=='cakewalk'):
            c1+=1
        elif(s=='simple'):
            c2+=1
        elif(s=='easy'):
            c3+=1
        elif(s=='easy-medium'):
            c4+=1
        elif(s=='medium'):
            c5+=1
        elif(s=='hard'):
            c6+=1
        elif(s=='medium-hard'):
            c7+=1
    if(c1>0 and c2>0 and c3>0 and (c4>0 or c5>0) and (c6>0 or c7>0)):
        print('Yes')
    else:
        print('No')
