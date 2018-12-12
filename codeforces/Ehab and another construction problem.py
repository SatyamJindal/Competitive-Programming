x = int(input())
flag = 0
for a in range(1, x + 1):
    for b in range(1, x + 1):
        if a % b == 0 and a * b > x and a < b * x:
            print(a, b)
            flag = 1
            break
    if flag:
        break
if not flag:
    print(-1)
