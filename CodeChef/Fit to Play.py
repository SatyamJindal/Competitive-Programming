t=int(input())
for I in range(t):
    n=int(input())
    a=[int(i) for i in input().split()]
    min1=9999999
    diff=0
    for i in range(len(a)):
        min1=min(min1,a[i])
        diff=max(diff,a[i]-min1)
    if(diff==0):
        print('UNFIT')
    else:
        print(diff)
