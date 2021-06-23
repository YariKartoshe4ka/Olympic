n, m = [int(i) for i in input().split()]

a = [['.'] * (m + 2)]
a += [['.'] + list(input()) + ['.'] for _ in range(n)]
a += [['.'] * (m + 2)]

cnt = 0

for i in range(1, n + 1):
    for j in range(1, m + 1):
        if '.' == a[i][j] == a[i][j - 1] == a[i - 1][j] == a[i][j + 1] == a[i + 1][j]:
            cnt += 1

print(cnt)