sieve=[1]*1000005
sieve[0]=0
sieve[1]=0
for i in range(2,1006):
    if(sieve[i]==1):
        for j in range(i*i,1000005,i):
            sieve[j]=0
t=int(input())
for I in range(t):
    count=0
    l,r=map(int,input().split(" "))
    for i in range(l,r+1):
        if(sieve[i]):
            count+=1
    print(count)
