t=int(input())
for I in range(t):
    s=input()
    a=[0]*26
    for i in s:
        a[ord(i)-97]+=1
    flag=0
    for i in range(26):
        if(a[i]>1):
            flag=1
            break
    if(flag):
        print('yes')
    else:
        print('no')
