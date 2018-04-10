t=int(input())
for i in range(t):
    n=int(input())
    a=[int(i) for i in input().split()]
    ele = max(a)
    freq=0
    ans=0
    tot = ((n)*(n-1))/2
    #print('tot',tot)
    for i in a:
        if(i==ele):
            freq+=1
    if(freq>1):
        ans=((freq)*(freq-1))//2
    else:
        freq1=0
        max1=-1
        for i in a:
            if(i>max1 and i!=ele):
                max1=i
        for i in a:
            if(i==max1):
                freq1+=1
        ans = freq*freq1
    print(ans/tot)
                
    
        
