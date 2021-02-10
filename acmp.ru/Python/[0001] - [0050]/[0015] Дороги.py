n = int(input())
ans = 0

for i in range(n):
    for j in input().split(' '):
        ans += int(j)

print(ans // 2)
