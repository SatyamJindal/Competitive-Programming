n=int(input())
p=bin(n)
p=p[2:]
count=0
for i in p:
    if(i=='1'):
        count+=1
print(count)
