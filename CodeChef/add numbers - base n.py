n=int(input())
x,y=map(str,input().split(" "))
sum1=0
sum2=0
a=0
for i in range(len(x)-1,-1,-1):
    sum1+=int(x[i])*(n**a)
    a+=1
a=0
for i in range(len(y)-1,-1,-1):
    sum2+=int(y[i])*(n**a)
    a+=1
print(sum1+sum2)
