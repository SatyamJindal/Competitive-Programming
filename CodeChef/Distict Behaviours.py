n=int(input())
a=[int(i) for i in input().split()]
a.sort()
count=1
flag=0
sum1=0
for i in range(len(a)-1):
    if(a[i]==a[i+1]):
        flag=1
        count+=1
        #print('yo',count)
    else:
        sum1+=((count)*(count-1))//2
        count=1
sum1+=((count)*(count-1))//2
if(flag==0):
    print(0)
else:   
    print(sum1)
