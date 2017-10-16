n,k=map(int,input().split(" "))
a=list(map(int,input().split(" ")))
b=[0]*(100000)
c=[0]*(100000)
for i in range(len(a)):
    b[a[i]]=a[i]
    c[a[i]]+=1
v=list(set(a))
count=0
for g in range(len(v)):
    s=k-v[g]
    #print('s',s)
    if(s==0):
        count+=1
    elif(s>0):
        if(b[s]==s):
            if(b[s]*2!=k and (c[v[g]]!=-1 and c[s]!=-1)):
                #print('hello1')
                count+=1
                c[v[g]]=-1
                c[s]=-1
                #print('count',count)
            elif(b[s]*2==k):
                if(c[v[g]]>1):
                    count+=1
                    
'''print('v',v)
print('b',b)
print('c',c)'''
print(count)
    
