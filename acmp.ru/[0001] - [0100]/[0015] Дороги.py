ans = 0

for _ in range(int(input())):
    for j in input().split():
        ans += int(j)

print(ans // 2)
