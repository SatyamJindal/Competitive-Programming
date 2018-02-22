'''1 = 001
2 = 010
3 = 011
4 - 100
5 - 101'''
n=int(input())
a=[int(i) for i in input().split()]
b=[0]*30
for i in range(len(a)):
    num=a[i]
    for j in range(30):
        if(num&1):
            b[j]+=1
        num>>=1
count=0
for i in range(len(b)):
    count+=((b[i]*(b[i]-1))//2)*(2**i)
print(count)
