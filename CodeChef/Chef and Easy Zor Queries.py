from collections import defaultdict
n,q=[int(x) for x in raw_input().split()]
pn=n
sq=int(n**0.5)+1
n=sq*sq
A=[int(x) for x in raw_input().split()]+[0]*(n-pn)
Blocks=[]
Blocks1=[]
last=[]
prev=0
 
 
 
def left_over(a1,x,y):
    no=0
    for i in range(y):
        if(a1[i]==x):
            no+=1
    return(no)
 
for i in range(sq):
    Blocks.append(defaultdict(int))
    Blocks1.append([])
 
 
for i in range(n):
    if(i==0 or (i%sq==0)):
        Blocks[i//sq][A[i]]+=1
        Blocks1[i//sq].append(A[i])
        prev=A[i]
    else:
        Blocks[i//sq][prev^A[i]]+=1
        Blocks1[i//sq].append(prev^A[i])
        prev^=A[i]
    if(i%sq==(sq-1)):
        last.append(prev)
 
for _I in range(q):
    tp,i,x=[int(j) for j in raw_input().split()]
    if(tp==1):
        Blocks[abs(i-1)//sq]=defaultdict(int)
        Blocks1[abs(i-1)//sq]=[]
        A[i-1]=x
        ini=sq*(abs(i-1)//sq)
        for h in range(ini,ini+sq):
            if(h==0 or (h%sq)==0):
                Blocks[h//sq][A[h]]+=1
                Blocks1[h//sq].append(A[h])
                prev=A[h]
            else:
                Blocks[h//sq][prev^A[h]]+=1
                Blocks1[h//sq].append(prev^A[h])
                prev^=A[h]
            if(h%sq==(sq-1)):
                last[h//sq]=prev
    else:
        count=0
        no_b=i//sq
        left_o=i%sq
        for h in range(no_b):
            count+=Blocks[h][x]
            if(h!=no_b):
                x^=last[h]
        count+=left_over(Blocks1[no_b],x,left_o)
        print(count)
