n = int(input())
A = [int(i) for i in input().split()]

from collections import defaultdict as dd

hsh = dd(int)

for i in range(n):
    for j in range(i+1, n):
        hsh[A[i]+A[j]]+=1

mx = max(hsh.values())
print(mx)
