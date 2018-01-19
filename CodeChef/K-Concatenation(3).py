t=int(input())
for I in range(t):
    n,k=[int(i) for i in input().split()]
    a=[int(i) for i in input().split()]
    temp=0
    ans=0
    sum1=0
    neg=0
    for i in range(len(a)):
        if(a[i]<0):
            neg+=1
        sum1+=a[i]
        temp+=a[i]
        if(temp<0):
            temp=0
        ans=max(ans,temp)
    pref=0
    suff=0
    s=a[0]
    s1=a[n-1]
    pref=max(s,pref)
    suff=max(s1,suff)
    for i in range(1,len(a)):
        s+=a[i]
        pref=max(pref,s)
    for i in range(len(a)-2,-1,-1):
        s1+=a[i]
        suff=max(suff,s1)
    if(neg==n):
        print(max(a))
    elif(k==1):
        print(ans)
    else:
        print(max(ans,pref+suff,pref+suff+(k-2)*sum1))
    
    
        
