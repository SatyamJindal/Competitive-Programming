from collections import defaultdict as dd
t=int(input())

for I in range(t):
    n=int(input())
    a=[int(i) for i in input().split()]
    di=dd(int)
    for i in a:
        di[i]+=1
    f=0
    for keys in di.keys():
        if(di[keys]>n//2):
            f=1
            print(keys)
            break
    if(f==0):
        print('NO Majority Element')
