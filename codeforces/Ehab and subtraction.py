n,k=[int(i) for i in input().split()]
a=[int(i) for i in input().split()]
a.sort()
curr_sum = 0
print(a[0])
curr_sum = a[0]
times = min(k-1,len(a)-1)
curr=1
ti=1
while(times>0):
    times-=1
    if(curr>n-1):
        break
    a[curr]-=curr_sum
    if(a[curr]==0):
        times+=1
        curr+=1
        continue
    ti+=1
    print(a[curr])
    curr_sum+=a[curr]
    curr+=1
    
if(k - ti>0):
    for i in range(k - ti):
        print(0)
