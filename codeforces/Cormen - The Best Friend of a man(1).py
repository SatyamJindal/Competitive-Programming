b,d,s=map(int,input().split(" "))
if(b==d and d==s):
    print('0')
elif(b!=d and d!=s and b!=s):
    count1=0
    k=max(b,d,s)-1
    if(k-b>0):
        count1+=k-b
    if(k-d>0):
        count1+=k-d
    if(k-s>0):
        count1+=k-s
    print(count1)
elif(b==0 and d==0 and s!=0):
    print((s-1)*2)
elif(b!=0 and d==0 and s==0):
    print((b-1)*2)
elif(d!=0 and b==0 and s==0):
    print((d-1)*2)
elif(b==d and d!=s):
    if(b>s):
        print((b-1)-s)
    else:
        print(((s-1)-b)*2)
elif(b==s and s!=d):
    if(b>d):
        print(b-1-d)
    else:
        print((d-1-b)*2)
elif(s==d and s!=b):
    if(s>b):
        print(d-1-b)
    else:
        print((b-1-d)*2)
    
    
    
