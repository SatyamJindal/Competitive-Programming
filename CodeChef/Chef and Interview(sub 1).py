'''#Subtask 1
t=int(input())
for I in range(t):
    n=int(input())
    sum1=0
    sum1+=n
    for j in range(1,(int(n)//2)+1):
        if(n%j==0):
            sum1+=j
    print(sum1)'''
#Printing all the divisors
#Subtask 2 - Observed patern of pairs
from math import sqrt
t=int(input())
for I in range(t):
    count1=0
    n=int(input())
    for i in range(1,int(sqrt(n))+1):
        if(n%i==0):
            if(n/i==i):
                #print(i)
                count1+=i
            else:
                #print(i)
                #print(n//i)
                count1+=i+(n//i)
    print(count1)        
            
            
