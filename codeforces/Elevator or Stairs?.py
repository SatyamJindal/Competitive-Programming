x,y,z,t1,t2,t3 = [int(i) for i in input().split()]
stairs = abs(y-x)*t1
lift = abs(z-x)*t2 + abs(x-y)*t2 + 3*t3
if(lift<=stairs):
    print('YES')
else:
    print('NO')
