n=int(input())
a=[int(i) for i in input().split()]
if(sorted(a)==a and len(set(a))!=1):
    print(0)
else:
    print(n+1)
    print(1,n,500005)
    for i in range(len(a)):
        a[i]+=(500005)
    for i in range(n):
        print(2,i+1,a[i]-i )
