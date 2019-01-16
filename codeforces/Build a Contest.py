n,m=[int(i) for i in input().split()]
state = [0]*(n+1)
curr=0
a=[int(i) for i in input().split()]
for i in a:
    state[i]+=1
    if(state[i]==1):
        curr+=1
    if(curr==n):
        print(1,end='')
        for i in range(1,len(state)):
            state[i]-=1
            if(state[i]==0):
                curr-=1
    else:
        print(0,end='')
