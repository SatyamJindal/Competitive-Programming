t=int(input())

def expo(x,y,M):
    curr=x%M
    fin=1
    while(y):
        if(y&1):
            fin*=curr%M
        y>>=1
        curr=(curr*curr)%M
    return fin%M

for I in range(t):
    s1,s2=[str(i) for i in input().split()]
    M = int(s1)
    a=[]
    f=''
    for i in s2:
        if(i.isdigit()):
            f+=i
        else:
            if(f!=''):
                a.append(f)
            f=''
    if(f!=''):
        a.append(f)
    ans=1
    for i in range(0,len(a),2):
        value = expo(int(a[i]),int(a[i+1]),M)
        ans = ((ans%M)*(value%M))%M
    print(ans)
        
        
        
        
