t=int(input())
for i in range(t):
    a,b=map(int,input().split(" "))
    f=1
    g=2
    while(1):
        a-=f
        if(a<0):
            print('Bob')
            break
        b-=g
        if(b<0):
            print('Limak')
            break
        f+=2
        g+=2
        
