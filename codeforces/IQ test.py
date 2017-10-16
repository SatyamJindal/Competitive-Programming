n=int(input())
odd=0
even=0
c=0
ind=0
a=list(map(int,input().split(" ")))
for i in range(len(a)):
    if(a[i]%2==0):
        even+=1
    else:
        odd+=1
if(even>odd):
    c=1
if(c==0):
    for g in range(len(a)):
        if(a[g]%2==0):
            ind=g
            break
else:
    for g in range(len(a)):
        if(a[g]%2!=0):
            ind=g
            break
print(g+1)
    
