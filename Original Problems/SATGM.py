'''
Satyam's Game
Satyam is given a challange by his friend. He is given an array of integers. He can choose any two numbers and replace the greater number out of the two with the subtraction of the
two numbers chosen. The game ends when all the numbers in the array become equal. Satyam needs to report that final value that is left in the final array.

Input
The first line contains an integer T(1<=T<=1000), denoting the number of test cases. Each test contains a number N(Number of elements in the array)(1<=N<=1000). Next line containts
n elements separated by a space(1<=A[i]<=10^9).

Output
Print the final value that will be left after the operations are performed.

Sample Input
3
2
10 12
2
5 9
3
6 10 15

Sample Output
2
1
1

Explanation
For the first test case, this is how the game can progress:
(10,2)-->(8,2)
(8,2)-->(6,2)
(6,2)-->(4,2)
(4,2)-->(2,2)

'''
t=int(input())
def gcd(a,b):
    if(a==0):
        return b
    else:
        return gcd(b%a,a)
for I in range(t):
    n=int(input())
    a=list(map(int,input().split(" ")))
    counter=a[0]
    for i in range(1,len(a)):
        counter=gcd(a[i],counter)
    print(counter)
 

