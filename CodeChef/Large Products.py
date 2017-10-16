n=int(input())
a=list(map(int,input().split(" ")))
prod=1
for i in a:
    prod*=i
print(prod%1000000007)
