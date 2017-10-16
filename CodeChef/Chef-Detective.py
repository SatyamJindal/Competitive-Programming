n=int(input())
b=[0]*(n+1)
c=[]
a=list(map(int,input().split(" ")))
for i in a:
    b[i]+=1
#print(b)
for i in range(len(b)):
    if(b[i]==0):
        c.append(i)
c.sort()
for i in c:
    print(i,end=' ')
    
