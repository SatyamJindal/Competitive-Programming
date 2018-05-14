t=int(input())
for I in range(t):
    n=input()
    a=[]
    a.append(n[0])
    print(n[0],end='')
    for i in range(1,len(n)):
        if(n[i]!=a[-1]):
            a.append(n[i])
            print(n[i],end='')
        
