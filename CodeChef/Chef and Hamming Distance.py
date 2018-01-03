t=int(input())
for I in range(t):
    count=0
    n=int(input())
    a=list(map(int,input().split(" ")))
    b=[]
    for i in a:
        b.append(i)
    #print(b)
    if(n==1):
        print(0)
        print(a[0])
    elif(n==2):
        if(a[0]==a[1]):
            print(0)
            print(a[0],a[1])
        else:
            print(2)
            print(a[1],a[0])
    else:
        if(n%2==0):
            ini=0
            fin=n-1
            if(b[0]==b[n-1]):
                b[0],b[1]=b[1],b[0]
                b[n-1],b[n-2]=b[n-2],b[n-1]
                ini=2
                fin=n-3
            while(ini+2<fin):
                #print('ini',ini)
                #print('fin',fin)
                #print(b)
                if(b[ini]==b[fin]):
                    #print('hello')
                    b[ini],b[ini+1]=b[ini+1],b[ini]
                    b[fin],b[fin-1]=b[fin-1],b[fin]
                    ini+=2
                    fin-=2
                else:
                    b[ini],b[fin]=b[fin],b[ini]
                    ini+=1
                    fin-=1
            a1=n//2
            if(b[a1]==b[a1-1] and (a[a1]==b[a1] and a[a1-1]==b[a1-1])):
                b[a1-1],b[a1-2]=b[a1-2],b[a1-1]
                b[a1],b[a1+1]=b[a1+1],b[a1]
            else:
                b[a1],b[a1-1]=b[a1-1],b[a1]
            print(n)
            for i in b:
                print(i,end=' ')
        else:
            if(n==3):
                if(b[0]==b[2]):
                    #print('hola')
                    b[1],b[2]=b[2],b[1]
                elif(b[0]!=b[1] and b[0]!=b[2]):
                    #print('hola')
                    o1=b[0]
                    o2=b[1]
                    o3=b[2]
                    b[0]=o2
                    b[1]=o3
                    b[2]=o1
                elif(b[1]==b[2]):
                    #print('hola')
                    b[0],b[1]=b[1],b[0]
                elif(b[0]==b[1]):
                    #print('hola')
                    b[1],b[2]=b[2],b[1]
            else:
                ini=0
                fin=n-1
                if(b[0]==b[n-1]):
                    b[0],b[1]=b[1],b[0]
                    b[n-1],b[n-2]=b[n-2],b[n-1]
                    ini=2
                    fin=n-3
                while(ini+1<fin):
                    if(b[ini]==b[fin] and ini!=(n//2-1)):
                    #print('hello')
                        b[ini],b[ini+1]=b[ini+1],b[ini]
                        b[fin],b[fin-1]=b[fin-1],b[fin]
                        ini+=2
                        fin-=2
                    elif(b[ini]==b[fin] and ini==(n//2-1)):
                        b[ini],b[ini-1]=b[ini-1],b[ini]
                        b[fin],b[fin+1]=b[fin+1],b[fin]
                        ini+=2
                        fin-=2
                    else:
                        b[ini],b[fin]=b[fin],b[ini]
                        ini+=1
                        fin-=1
                #b[(n//2)],b[(n//2)+1]=b[(n//2)+1],b[(n//2)]
                #print(b)
                num11=b[n//2]
                for i in range((n//2)+1,n):
                    if(num11!=a[i] and num11!=b[i]):
                        b[n//2],b[i]=b[i],b[n//2]
                        break
                        
            #print(a)
            #print(b)
            for i in range(len(b)):
                if(a[i]!=b[i]):
                    count+=1
            print(count)
            for i in b:
                print(i,end=' ')
            print()
