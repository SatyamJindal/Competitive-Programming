t=int(input())
for I in range(t):
    a=[int(i) for i in input().split()]
    c=0
    f=0
    for i in a:
        if(i==1):
            c+=1
        else:
            c=0
        if(c>5):
            f=1
            break
    if(f==1):
        print('#coderlifematters')
    else:
        print('#allcodersarefun')
            
            
            
