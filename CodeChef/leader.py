def leaders(arr,n):
    c=[]
    for i in range(0,n):
        for j in range(i+1,n):
            if(arr[i]<=arr[j]):
                break
        if(j==n-1):
            c.append(arr[i])
    for i in c:
        print(i,end=' ')
arr=list(map(int,input().split(" ")))
leaders(arr,len(arr))
            
