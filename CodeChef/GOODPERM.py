from itertools import permutations as pt
t=int(input())
for I in range(t):
    final=0
    n,k=[int(i) for i in input().split()]
    has=[0]*(n+1)
    miss_ind=[]
    a=[int(i) for i in input().split()]
    for i in range(len(a)):
        has[a[i]]+=1
        if(a[i]==0):
            miss_ind.append(i)
    miss_ele=[]
    for i in range(1,len(has)):
        if(has[i]==0):
            miss_ele.append(i)
    comb = list(pt(miss_ele))
    for i in range(len(comb)):
        c=0
        for j in range(len(miss_ind)):
            a[miss_ind[j]]=comb[i][j]
        for j in range(1,len(a)):
            if(a[j]>a[j-1]):
                c+=1
        if(c==k):
            final+=1
    print(final)
        
    
    
