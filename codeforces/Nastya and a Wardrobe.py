M = 10**9+7
x,k=[int(i) for i in input().split()]
if(x==0):
    print(0)
elif(k==0):
    print((x*2)%M)
else:
    top_sum = ((pow(2,k,M)%M)*((2*x-1)%M))%M+1
    print(top_sum%M)
