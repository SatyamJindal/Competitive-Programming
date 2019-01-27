n  = int(input())
ans = 0
for i in range(1,n + 1):
    for j in range(i , n + 1):
        c = i^j
        if c<= n and c>= j and i+j>c and j+c>i and c+i>j:
            #print(i,j,i^j)
            ans += 1

print(ans)
