n, m = [int(i) for i in input().split()]
a = [input() for i in range(n)]
r = 0

input()

for i in range(n):
    b = input()

    for j in range(m):
        if a[i][j] == b[j]:
            r += 1

print(r)