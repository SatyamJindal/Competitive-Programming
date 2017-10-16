n1=100005
a=[1 for i in range(100005)]
b=[0 for i in range(100005)]
a[0]=0
a[1]=0
#Sieveing for prime numbers
for i in range(2,1005):
    if(a[i]==1):
        for g in range(2*i,n1,i):
            a[g]=0
#Sieveing for the number of prime facotrs of each number
for i in range(2,1005):
    if(a[i]==1):
        b[i]+=1
        for j in range(2*i,n1,i):
            b[j]+=1
t=int(input())
for I in range(t):
    count=0
    a1,b1,k=map(int,input().split(" "))
    for i in range(a1,b1+1):
        #print(b[i])
        if(b[i]==k):
            count+=1
    print(count)

