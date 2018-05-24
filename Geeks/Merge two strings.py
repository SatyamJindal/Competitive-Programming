t=int(input())
for I in range(t):
    s,s1=[str(i) for i in input().split()]
    c=0
    c1=0
    s2=''
    while(c!=len(s) and c1!=len(s1)):
        #print('c',c,'c1',c1)
        s2+=s[c]
        s2+=s1[c1]
        c+=1
        c1+=1
    s2+=s[c:]
    s2+=s1[c1:]
    print(s2)
