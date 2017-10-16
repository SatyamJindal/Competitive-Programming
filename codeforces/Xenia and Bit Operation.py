def build(node,start,end,a,tree):
    if(start==end):
        tree[node]=a[start]
    else:
        mid=(start+end)>>1
        build(node<<1,start,mid,a,tree)
        build(node<<1|1,mid+1,end,a,tree)
        tree[node]=tree[node<<1]|tree[node<<1|1]
def update(node,start,end,a,tree,p,b):
    if(start==end):
        tree[node]=b
        a[p]=b
    else:
        mid=(start+end)>>1
        if(p>=start and p<=mid):
            update(node<<1,start,mid,a,tree,p,b)
        else:
            update(node<<1|1,mid+1,end,a,tree,p,b)
        tree[node]=tree[node<<1]|tree[node<<1|1]
n,m=map(int,input().split(" "))
a=list(map(int,input().split(" ")))
tree=[0]*(4*(2**n))
build(1,0,2**n-1,a,tree)
if(n!=1):
    tree[1]=tree[2]^tree[3]
for I in range(m):
    p,b=map(int,input().split(" "))
    update(1,0,(2**n)-1,a,tree,p-1,b)
    if(n!=1):
        tree[1]=tree[2]^tree[3]
    print(tree[1])

    


