n,k=map(int,input().split(" "))
if(n%2==0 and n//2==k):
    print('1',end=' ')
    print(n//2)
elif(k==0):
    print('0',end=' ')
    print('0')
elif(n>1 and k==1):
    print('1',end=' ')
    print('2')
elif(n%2!=0 and n//2+1==k):
    print('1',end=' ')
    print(n//2)
elif(k==n):
    print('0',end=' ')
    print('0')
elif(k<n//2):
    print('1',end=' ')
    print(k)
elif(k>n//2):
    print('1',end=' ')
    if(n%2==0):
        print(n-k)
    else:
        print(n-k)

    
