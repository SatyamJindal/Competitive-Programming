t=int(input())
for i in range(t):
    n,b=map(int,input().split(" "))
    if(n//b==1):
        print(n-b)
    #elif(n<=b):
        #print('0')
    else:
        a=[]
        index=1
        v=n-b
        max1=(n-1)//b
        a.append(max1)
        for j in range(2,v+1):
            c=(((n-j)//b)*j)
            if(c>max1):
                max1=c
                index=j
            a.append(((n-j)//b)*j)
        print(a)
        print(max1)
        print('index',index)
