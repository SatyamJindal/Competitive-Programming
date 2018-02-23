t=int(input())
for I in range(t):
    y=int(input())
    count=0
    for i in range(1,701):
        value = y-i
        if(value>0):
            count+=int((value**0.5))
    print(count)
