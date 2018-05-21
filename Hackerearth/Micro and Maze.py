n,m=[int(i) for i in input().split()]
a=[]

def dfs(x,y):
    if(x==n-1 and y==m-1):
        return True
    if(x>=n or y>=m):
        return False
    if(x<0 or y<0):
        return False
    if(vis[x][y]==1):
        return False
    if(a[x][y]==0):
        return False
    vis[x][y]=1
    if(dfs(x+1,y)==True):
        return True
    if(dfs(x-1,y)==True):
        return True
    if(dfs(x,y+1)==True):
        return True
    if(dfs(x,y-1)==True):
        return True
    return False
    
    


for i in range(n):
    b=[int(i) for i in input().split()]
    a.append(b)
vis = [[0 for i in range(m)] for j in range(n)]
#vis[0][0]=1
if(dfs(0,0)):
    print('Yes')
else:
    print('No')



