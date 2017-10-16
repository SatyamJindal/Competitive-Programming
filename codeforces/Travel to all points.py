t=int(input())
for i in range(t):
    d=0
    a=[]
    b=[]
    n=int(input())
    for j in range(n):
        c1,c2=map(int,input().split(" "))
        a.append(c1)
        b.append(c2)
    for g in range(len(a)):
        for h in range(g+1,len(a)):
            if(abs(a[g]-a[h])+abs(b[g]-b[h])>=d):
                print('g',g)
                print('h',h)
                d=abs(a[g]-a[h])+abs(b[g]-b[h])
    print(d)
