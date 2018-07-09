a,b,c=[int(i) for i in input().split()]
if(a>b):
    a,b=b,a
t = min(b-a,c)
a+=t
c-=t
print((a+(c//2))*2)
