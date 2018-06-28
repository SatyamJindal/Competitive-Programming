M = 10**9+7


def mul(A,B):
    c=[[0,0],[0,0]]
    for i in range(2):
        for j in range(2):
            for k in range(2):
                c[i][j]+=(A[i][k]*B[k][j])%M
    for i in range(2):
        for j in range(2):
            A[i][j]=c[i][j]
    return A

def expo(A,n):
    coeff = [[1,1],[1,0]]
    if(n==1):
        return A
    else:
        A = expo(A,n//2)
        A = mul(A,A)
        if(n&1):
            mul(A,coeff)
        return A

def ans(n):
    A=[[1,1],[1,0]]
    A = expo(A,n-1)
    return ((A[0][0])%M+(A[0][1])%M)
    

t=int(input())
for i in range(t):
    n=int(input())
    if(n==1 or n==2):
        print(1)
    else:
        print(ans(n-1)%M)
