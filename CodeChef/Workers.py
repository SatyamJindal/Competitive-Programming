n=int(input())
a=[int(i) for i in input().split()]
b=[int(i) for i in input().split()]
min_1=99999999
min_2=99999999
min_3=99999999
for i in range(len(b)):
    if(b[i]==1):
        min_1 = min(a[i],min_1)
    elif(b[i]==2):
        min_2 = min(a[i],min_2)
    elif(b[i]==3):
        min_3 = min(a[i],min_3)
print(min(min_1+min_2,min_3))
