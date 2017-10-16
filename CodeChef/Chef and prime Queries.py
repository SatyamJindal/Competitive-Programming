from math import sqrt
n=int(input())
a=list(map(int,input().split(" ")))
q=int(input())
def isPrime(x):
    flag=0
    for i in range(2,int(sqrt(x))+1):
        if(x%i==0):
            flag=1
            break
    if(flag==1):
        return False
    else:
        return True
def F(L,R,X,Y):
    result=0
    for i in range(X,Y+1):
        if(isPrime(X)):
            for j in range(L-1,R):
                number=a[j]
                exponent=0
                while(number%i==0):
                    exponent+=1
                    number//=i
                result+=exponent
    return result
for i in range(q):
    L,R,X,Y=map(int,input().split(" "))
    print(F(L,R,X,Y))
    
    
