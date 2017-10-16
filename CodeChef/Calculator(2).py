t=int(input())
for I in range(t):
    n,b=map(int,input().split(" "))
    if(n//b==1):
        print(n-b)
    else:
        a=[]
        d=((n**2)//(4*b))
        a.append(d)
        a.append(d-2)
        a.append(d+2)
        print('a',a)
        print('d',d)
        c=((n-b)//2)
        d1=c-20
        print('c',c)
        b1=[]
        if(d1<0):
            d1=1
        for i in range(d1,c+20):
            q=(((n-i)//b)*i)
            print('q',q)
            if q in a:
                b1.append(q)
        print('b1',b1)
        print(max(b1))
