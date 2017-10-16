t=int(input())
for I in range(t):
    n=int(input())
    a=list(map(int,input().split(" ")))
    print(len(set(a)))
    '''if(len(b)==1):
        print('1')
    else:
        count=0
        for i in range(len(b)-1,0,-1):
            count+=(b[i]-b[i-1])
        print(count+1)'''
