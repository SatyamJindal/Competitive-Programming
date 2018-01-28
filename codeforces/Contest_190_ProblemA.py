n,m=[int(i) for i in input().split()]
if(n==0 and m==0):
    print(0,0)
elif(m==0):
    print(n,n)
elif(n==0):
    print('Impossible')
else:
    min1=max(n,m)
    max1=m+n-1
    print(min1,max1)
