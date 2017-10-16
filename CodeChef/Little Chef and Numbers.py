t=int(input())
for I in range(t):
    n=int(input())
    a=[int(i) for i in input().split(" ")]
    count1=0
    count2=0
    for i in a:
        if(i==1):
            count1+=1
        elif(i==2):
            count2+=1
    n-=count1
    pair_no=((n)*(n-1))//2
    if(count2>1):
        pair_no-=((count2)*(count2-1))//2
    print(pair_no)
