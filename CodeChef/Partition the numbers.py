t=int(input())
for I in range(t):
    x,n=[int(i) for i in input().split()]
    if(n==2 or n==3):
        print('impossible')
    else:
        sum1=((n)*(n+1))//2
        if((sum1-x)%2!=0):
            print('impossible')
        else:
            sum1=(sum1-x)//2
            s=['-1']*n
            s[x-1]='2'
            for i in range(n-1,-1,-1):
                if(i+1!=x):
                    if(sum1-(i+1)>=0 and sum1-(i+1)!=x):
                        s[i]='0'
                        sum1-=(i+1)
                    else:
                        s[i]='1'
            print("".join(s))
                        
                    
