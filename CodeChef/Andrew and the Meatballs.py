t=int(input())
for I in range(t):
    n,m=[int(i) for i in input().split()]
    a=[int(i) for i in input().split()]
    a.sort()
    sum1=0
    count=0
    flag=0
    for i in range(len(a)-1,-1,-1):
        sum1+=a[i]
        count+=1
        if(sum1>=m):
            flag=1
            break
    if(flag==1):
        print(count)
    else:
        print(-1)
            
        
