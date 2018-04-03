t=int(input())
for I in range(t):
    n,k=[int(i) for i in input().split()]
    a=[int(i) for i in input().split()]
    sum1 = sum(a)
    count=0
    for i in a:
        if(sum1-i<i+k):
            count+=1
    print(count)
