t=int(input())
for I in range(t):
    dist=0
    s=input()
    n=int(input())
    a=[]
    for i in range(10002):
        a.append([99999999,-1])
    for i in range(n):
        x,y=[int(j) for j in input().split()]
        if(y>a[x][1]):
            a[x][1]=y
        if(y<a[x][0]):
            a[x][0]=y
    #a[0][1]=max(0,a[0][1])
    #a[0][0]=min(0,a[0][0])
    #dist+=(a[0][1]-a[0][0])
    flag=0
    prevx=0
    for i in range(10002):
        if(a[i][0]!=99999999 and a[i][1]!=-1):
            if(flag==0):
                prevx=i
                flag=1
                dist+=(a[i][1]-a[i][0])
            else:
                dist+=(a[i][1]-a[i][0])+((i-prevx)**2+(a[prevx][0]-a[i][1])**2)**(0.5)
                prevx=i
            #print('dist',dist)
    print("%.2f" % round(dist,2))
    
        
