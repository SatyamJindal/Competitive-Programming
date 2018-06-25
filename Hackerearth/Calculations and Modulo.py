x=0
y=0

def ext(a,b):
    global x,y
    if(b==0):
        x=1
        y=0
    else:
        ext(b,a%b)
        temp=x
        x=y
        y=temp-(a//b)*y


a,b,c,m=[int(i) for i in input().split()]
num=pow(a,b,m)
ext(c,m)
den = (x%m+m)%m
print((num*den)%m)
