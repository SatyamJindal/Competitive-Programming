# cook your dish here

import numpy as np
t=int(input())

for I in range(t):
    n,q=[int(i) for i in input().split()]
    a=np.array([int(i) for i in input().split()])
    b=np.array([int(i) for i in input().split()])
    for i in range(q):
        x,y,l=[int(i) for i in input().split()]
        print(np.dot(a[x-1:x+l-1],b[y-1:y+l-1]))
        

