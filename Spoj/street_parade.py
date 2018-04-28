n = int(input())
while(n!=0):
    dest=1
    a=[int(i) for i in input().split()]
    b=[]
    flag=0
    for i in range(n):
        if(a[i]==dest):
            dest+=1
        elif(len(b)==0 or b[-1]>a[i]):
            b.append(a[i])
        elif(b[-1]<a[i]):
            flag=1
            break
        if(len(b)!=0):
            #print(b[-1],dest)
            while(len(b)!=0 and b[-1]==dest):
                dest+=1
                b.pop()
    if(flag):
        print('no')
    else:
        print('yes')
    n=int(input())
