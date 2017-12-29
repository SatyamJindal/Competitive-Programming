n,d=[int(i) for i in input().split()]
a=[]
for i in range(n):
    n1=int(input())
    a.append(n1)
a.sort()
count=0
prev_used=0
for i in range(len(a)-1,0,-1):
    if(a[i]-a[i-1]<=d and prev_used!=i):
        count+=1
        prev_used=i-1
print(count)
    
        
