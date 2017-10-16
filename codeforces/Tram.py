n=int(input())
j=[]
c,d=map(int,input().split(" "))
count=0
count+=d
j.append(count)
for i in range(1,n):
    a,b=map(int,input().split(" "))
    count=count-a+b
    j.append(count)
print(max(j))
    
    
