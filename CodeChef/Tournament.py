n=int(input())
a=[int(i) for i in input().split()]
a.sort()
sum1=0
for i in range(len(a)):
    sum1+=(i*a[i])-((n-1-i)*a[i])
print(sum1)
