s,t=map(int,input().split(" "))
a,b=map(int,input().split(" "))
m,n=map(int,input().split(" "))
c=list(map(int,input().split(" ")))
d=list(map(int,input().split(" ")))
count1=0
count2=0
for i in c:
    if(i>=s-a and i<=t-a and i>0):
        count1+=1
for i in d:
    if(t-b>=i and i>=s-b and i<0):
        count2+=1
print(count1)
print(count2)
