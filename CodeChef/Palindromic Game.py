#Hashing
t=int(input())
for i in range(t):
    a=[0]*26
    b=[0]*26
    flag=0
    s=input().rstrip('\r')
    s1=input().rstrip('\r')
    for j in range(len(s)):
        a[ord(s[j])-97]+=1
        b[ord(s1[j])-97]+=1
    count1=0
    count2=0
    f=0
    c=[]
    for j in range(26):
        if(a[j]>1 and b[j]==0):
            count1+=1
        if(a[j]==1 and b[j]==0):
            c.append(j)
            count2+=1
        if(b[j]>0 and a[j]==0):
            f=1
    if(len(s)==1):
        print('B')
    else:
        if(count1>0 or (count2>=1 and f==0)):
            print('A')
        else:
            print('B')
        
    
    
    
