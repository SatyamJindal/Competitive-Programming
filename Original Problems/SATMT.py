'''
Satyam's mystery machine

One day satyam was walking around in his house and he suddenly found a secret door. Excited, he went inside and found a machine called 'Jindal' with a button on it. After pressing
the button satyam was taken into a virtual world where he was told by Ayush that he could collect as much money from this world as possible and it will be credited to his real
account. 

Ayush hands over a world number "W" and a lucky number "Y" to satyam. The total money that can be calculated is by multiplying "W", "Y" number of times and adding it to
"Y" multiplied by "W" number of times. Please help satyam in knowing how much can he earn!!


Input
First line of each test case contains T (number of test cases).
Next T lines contain the world number and the lucky number separated by a space.

Output
For each test case output the total amount of money. As the amount of money can be large. Output the final result%1000000007

Constraints
1<=T<=10^4
1<=W<=10^9
1<=Y<=10^9


Time limit - 4s

Example
Input:
2
2 3
1 2
Output:
17
3

Codechef Link - https://www.codechef.com/problems/SATMT
'''

def expo(x,y):
    ini=x
    fin=1
    while(y):
        if(y&1):
            fin=(fin*ini)%(10**9+7)
        ini=(ini*ini)%(10**9+7)
        y>>=1
    return(fin%(10**9+7))


t=int(input())
for I in range(t):
    W,Y=[int(i) for i in input().split()]
    ans=(expo(W,Y)%(10**9+7)+expo(Y,W)%(10**9+7))%(10**9+7)
    print(ans)
    
