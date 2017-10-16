n=int(input())
a=list(map(int,input().split(" ")))
count1=0
b=[]
for i in range(len(a)):
    if(a[i]==1):
        count1+=1
    else:
        if(count1!=0):
            b.append(count1)
        count1=0
if(count1!=0):
    b.append(count1)
#print(b)
if(len(b)==1):
    print(b[0])
else:
    print(max(b)+1)
    


