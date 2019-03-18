n,k=[int(i) for i in input().split()]
a=[int(i) for i in input().split()]
typ=1
num=n//a[0]
tot = num*a[0]
for i in range(1,len(a)):
    if((n//a[i])*(a[i])>tot):
        typ=i+1
        tot=(n//a[i])*a[i]
print(typ,n//a[typ-1])
