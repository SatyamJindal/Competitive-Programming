n,k=map(int,input().split(" "))
if(k>n):
    print('NO')
elif(k==n):
    print('YES')
else:
    if((n//k)%2==0):
        print('NO')
    else:
        print('YES')
