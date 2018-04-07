'''Satyam's dream
Satyam's dream is to be the fastest in answering all the questions asked to him. To accomplish his dream his friends Ujjwal,Aman and Abhay try to help him in this. They give him a bunch
of numbers to him. Now they give Satyam a bunch of queries and they ask him to tell the sum of all prime numbers in that range.

Input
First line contains two integers n and q separated by a space which represent the number of elements and the number of queries respectively.
Next line containts n elements.
Next q lines contain two integers L and R which represents the range.(1 - based indexing)

Output
For each querry output the asked sum

Constraints
1<=n<=100000
1<=q<=100000
1<=A[i]<=100000

Example
Input:
5 3
1 2 3 4 5
1 1
1 3
5 5
Output:
0
5
5

Codechef Link - https://www.codechef.com/problems/SATDR
'''





def sieve():
    start=2
    while(start*start<10**5+5):
        if(siv[start]==0):
            for i in range(2*start,10**5+5,start):
                siv[i]=1
        start+=1
    siv[1]=1
    siv[0]=1
  
def build(node,start,end):
    if(start==end):
        if siv[a[start]]==0:
            tree[node]=a[start]
        else:
            tree[node]=0
    else:
        mid=(start+end)//2
        build(2*node,start,mid)
        build(2*node+1,mid+1,end)
        tree[node]=tree[2*node]+tree[2*node+1]

def query(node,start,end,l,r):
    if(l>end or r<start):
        return 0 
    if(l<=start and end<=r):
        return tree[node]
    else:
        mid=(start+end)//2
        a=query(2*node,start,mid,l,r)
        b=query(2*node+1,mid+1,end,l,r)
        return a+b
        
n,q=[int(i) for i in input().split()]
tree=[0]*(4*n)
a=[int(i) for i in input().split()]
siv=[0]*(10**5+5)
sieve()
build(1,0,n-1)
for I in range(q):
    l,r=[int(i) for i in input().split()]
    print(query(1,0,n-1,l-1,r-1))
    
