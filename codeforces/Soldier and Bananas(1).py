k,n,w=map(int,input().split(" "))
b=((w)*(w+1))//2
c=k*b
if(n>=c):
    print('0')
else:
    print(c-n)
