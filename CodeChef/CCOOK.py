a=['Beginner','Junior Developer','Middle Developer','Senior Developer','Hacker','Jeff Dean']
n=int(input())
for I in range(n):
    b=[int(i) for i in input().split()]
    print(a[b.count(1)])
