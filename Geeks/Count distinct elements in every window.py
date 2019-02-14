from collections import defaultdict as dd
t=int(input())
for I in range(t):
    dic = dd(int)
    n,k=[int(i) for i in input().split()]
    a=[int(i) for i in input().split()]
    for i in range(k):
        dic[a[i]]+=1
    count = len(dic)
    print(count,end=' ')
    for i in range(k,len(a)):
        if(dic[a[i-k]]==1):
            count-=1
        dic[a[i-k]]-=1
        if(dic[a[i]]==0):
            count+=1
        dic[a[i]]+=1
        print(count,end=' ')
    print()
