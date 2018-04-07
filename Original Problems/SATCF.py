'''
Satyam's Confusion

Satyam was challanged by his friend Aditya to play a game called 'Is it the one?'. The game includes n Cups given to satyam by aditya. Now satyam is asked to keep all cups
on top of one another on a table kept next to him. Now aditya asked satyam to tell him whether total cups is in power of two. Satyam wants to show aditya what is he capable
of and wants to tell him this as soon as possible.

Input
First line of each test case contains T (number of test cases). For each test case there is just one number 'n'.

Output
For each test case print "Yes" or "No". (Without quotes)

Constraints
1<=T<=10^5
1<=n<10^18

Time Limit - 1s

Example

Input 
2 
7 
1024

Output:

No
Yes

Codechef Link - https://www.codechef.com/problems/SATCF
'''

t=int(input())
for I in range(t):
    n=int(input())
    if(n&(n-1)==0):
        print('Yes')
    else:
        print('No')
    


