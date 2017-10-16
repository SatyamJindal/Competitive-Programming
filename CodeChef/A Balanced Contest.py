t=int(input())
for I in range(t):
    n,p=map(int,input().split(" "))
    cake=p//2
    hard=p//10
    cake1=0
    hard1=0
    a=list(map(int,input().split(" ")))
    for i in range(len(a)):
        if(a[i]>=cake):
            cake1+=1
        elif(a[i]<=hard):
            hard1+=1
    if(cake1==1 and hard1==2):
        print('yes')
    else:
        print('no')
