n=int(input())
a=list(map(int,input().split(" ")))
b=list(map(int,input().split(" ")))
c=list(map(int,input().split(" ")))
d=list(set(a)-set(b))
e=list(set(b)-set(c))
print(d[0])
print(e[0])
