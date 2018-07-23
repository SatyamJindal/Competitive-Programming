n = int(input())
ans = 0
for i in range(1,(n//2)+1):
    if n % i == 0:
        ans += 1

print(ans)
