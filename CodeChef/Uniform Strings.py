t=int(input())
for I in range(t):
    s=input()
    c=0
    for i in range(len(s)-1):
        if(s[i]!=s[i+1]):
            c+=1
    if(s[0]!=s[-1]):
        c+=1
    #print('c',c)
    if(c<=2):
        print('uniform')
    else:
        print('non-uniform')
