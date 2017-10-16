t=int(input())
for i in range(t):
    count=0
    n=int(input())
    while(n!=1):
        if(n%2==0):
            n//=2
        elif(n%3==0):
            n//=3
        else:
            n-=1
        count+=1
    print(count)
