t=int(input())
a=[0]*1000000
a[0]=0
a[1]=1
a[2]=1
for i in range(4,1000001):
    if(i%2==0 and i%3==0):
        a[i-1]=min(a[(i//2)-1]+1,a[(i//3)-1]+1)
    elif(i%2==0 and i%3!=0):
        c=(i//3)*3
        a[i-1]=min(a[(i//2)-1]+1,a[c-1]+(i-c))
    elif(i%3==0 and i%2!=0):
        a[i-1]=min(a[(i//3)-1],a[i-2]+1)
    else:
        c=(i//3)*3
        d=i-2
        a[i-1]=min(a[c-1]+(i-c),a[d]+1)
for i in range(t):
    print(a[int(input())-1])
'''for i in range(10):
    print(a[i])

4 -  c=3
a[3]=min(a[1]
    
'''
