t=int(input())
ans=[]
for j in range(10**5+1):
    flag=0
    num=str(j*j)
    for i in range(len(num)):
        if(num[i]!='0' and num[i]!='1' and num[i]!='4' and num[i]!='9'):
            flag=1
            break
    if(flag==0):
        ans.append(j*j)
for I in range(t):
    a,b=[int(i) for i in input().split()]
    count=0
    for i in range(len(ans)):
        if(ans[i]>=a and ans[i]<=b):
                count+=1
    print(count)
            
