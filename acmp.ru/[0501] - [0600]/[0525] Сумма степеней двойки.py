n = int(input())

dp = [[0] * (n + 1) for _ in range(11)]

for j in range(n + 1):
    dp[0][j] = 1

for i in range(1, 11):
    dp[i][0] = 1


for i in range(1, 11):
    for j in range(1, n + 1):
        tmp = j
        while tmp >= 0:
            dp[i][j] += dp[i - 1][tmp]
            tmp -= 1 << i

print(dp[10][n])
