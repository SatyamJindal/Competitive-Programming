t=int(input())
for I in range(t):
    x=int(input())
    if(x%10==0):
        print(0)
    elif(x%5==0):
        print(1)
    else:
        print(-1)
