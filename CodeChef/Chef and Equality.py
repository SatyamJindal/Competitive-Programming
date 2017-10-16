t=int(input())
for I in range(t):
    n=int(input())
    count1=0
    count2=0
    a=list(map(int,input().split(" ")))
    b=max(a)
    c=min(a)
    #print('b',b)
    #print('c',c)
    for j in range(len(a)):
        if(a[j]<b):
            count1+=1
        if(a[j]>c):
            count2+=1
    #print('count1',count1)
    #print('count2',count2)
    if(count1<=count2):
        print(count1)
    else:
        print(count2)
