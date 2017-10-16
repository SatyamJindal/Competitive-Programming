t=int(input())
for I in range(t):
    n,k=map(int,input().split(" "))
    max1=0
    for i in range(2,k+1):
        #print('a',n%2)
        if(n%i>max1):
            max1=n%i
    print(max1)
        
