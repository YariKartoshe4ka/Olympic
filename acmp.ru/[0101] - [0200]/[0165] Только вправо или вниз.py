n, m = map(int, input().split())
a = [[int(i) for i in input().split()] for _ in range(n)]
a[-1][-1] = 1

dp = [[0] * m for _ in range(n)]
dp[0][0] = 1

for i in range(n):
    for j in range(m):
        if i + a[i][j] < n:
            dp[i + a[i][j]][j] += dp[i][j]

        if j + a[i][j] < m:
            dp[i][j + a[i][j]] += dp[i][j]

print(dp[-1][-1])
