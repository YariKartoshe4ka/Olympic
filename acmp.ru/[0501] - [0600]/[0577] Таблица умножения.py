n, m = map(int, input().split())
ans = [0] * 10

for i in range(1, n + 1):
    for j in range(1, m + 1):
        for c in str(i * j):
            ans[int(c)] += 1

print(*ans, sep='\n')
