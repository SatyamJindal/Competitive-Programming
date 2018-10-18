n=int(input())
a=[int(i) for i in input().split()]
possi=True
ind=-1
if(a[0]!=0):
    possi=False
    ind=1
else:
    curr_max = 0
    for i in range(1,len(a)):
        if(a[i]-1>curr_max):
            possi=False
            ind=i+1
            break
        curr_max = max(a[i],curr_max)
        
if(possi):
    print(-1)
else:
    print(ind)
