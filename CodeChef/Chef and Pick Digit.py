t=int(input())
for I in range(t):
    b=[]
    n=input()
    a=[0]*(11)
    for i in range(len(n)):
        c=int(n[i])
        if(c==0):
            a[10]+=1
        else:
            a[c-1]+=1
    count=0
    if(a[5]>0):
        if(a[4]>0):
            b.append('A')
        if(a[5]>1):
            b.append('B')
        if(a[6]>0):
            b.append('C')
        if(a[7]>0):
            b.append('D')
        if(a[8]>0):
            b.append('E')
    for i in range(6,8):
        if(a[i]>0):
            for g in range(10):
                if(a[g]>0 and g!=i):
                    b.append(chr(int(str(i+1)+str(g+1))))
            if(a[10]>0):
                b.append(chr(int(str(i+1)+str('0'))))
    if(a[6]>1):
        b.append('M')
    if(a[7]>1):
        b.append('X')
    if(a[8]>0 and a[10]>0):
        b.append('Z')
    b.sort()
    s1=''
    for j in range(len(b)):
        s1+=b[j]
    print(s1)
            
        
        
        
        
        
    
