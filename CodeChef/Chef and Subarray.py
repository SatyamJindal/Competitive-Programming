n=int(input())
a=[int(i) for i in input().split()]
count=0
max_count=0
for i in range(len(a)):
    if(a[i]!=0):
        count+=1
    elif(a[i]==0 and count!=0):
        if(max_count<count):
            max_count=count
        count=0
if(count>max_count):
    max_count=count
print(max_count)
        
