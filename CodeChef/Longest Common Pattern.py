t=int(input())
for I in range(t):
    a=[0]*100
    b=[0]*100
    s1=input()
    s2=input()
    for i in range(len(s1)):
        a[ord(s1[i])-48]+=1
    for i in range(len(s2)):
        b[ord(s2[i])-48]+=1
    count=0
    for i in range(100):
        count+=min(a[i],b[i])
    print(count)
            
