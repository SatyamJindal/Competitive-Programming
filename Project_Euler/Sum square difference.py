count=0
n=int(input())
for i in range(1,n+1):
    for j in range(i+1,n+1):
        count+=(i*j)
print(count*2)
