'''
Satyam and his sister are fighting over which movie should they watch. As they cannot come up to a conclusion, satyam's sister being very smart challnged him to solve a puzzle. Only
if Satyam can solve the puzzle in time will they go for the movie which satyam likes else his sister will win. His sister brings n coins and makes various stacks of different length.
Now she asks Satyam to choose any two stacks and instead keep one stack which can be of length between the lengths of both the stacks(including the lengths of the current stacks)
In the end satyam will obviosuly be left with just one stack. Now his sister gives him a bunch of querries in which she gives a number K(length of the stack) and asks him if this
number could be achieved in the end by performing all the operations. Now Satyam has to report this to his sisteras soon as possible. Help satyam beat his sister and watch his
choice of movie!

Input
The first line of the input contains a single integer T(1<=T<=10), denoting the number of test cases. For each test case there are two space separated numbers given which are N(Number of
stacks) and Q(Number of querries) (1<=N<=10^5 ; 1<=Q<=10^5). Next line containts the length of all stacks(1<=A[i]<=10^9) separated by a space. Next 'Q' lines contains the number
'K'(1<=K<=10^9) given by satyam's sister.

Output
For each 'K' output print 'Satyam_Y' if it is possible to get that number else print 'Satyam_N' (without quotes)

'''
t=int(input())
for I in range(t):
    n,q=map(int,input().split(" "))
    a=[int(i) for i in input().split()]
    min1=min(a)
    max1=max(a)
    for j in range(q):
        b=int(input())
        if(b>=min1 and b<=max1):
            print('Satyam_Y')
        else:
            print('Satyam_N')
