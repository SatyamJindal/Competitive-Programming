n,hit,t=[int(i) for i in input().split()]
a=[int(i) for i in input().split()]
a.sort()
count=0
for i in range(len(a)):
    if(t<=0):
        break
    if(a[i]//hit==0):
        count+=1
        t-=1
    else:
        if(a[i]%hit==0):
            t-=a[i]//hit
        else:
            t-=a[i]//hit+1
        if(t>=0):
            count+=1
        else:
            break
print(count)
