n = int(input())
a = [int(i) for i in input().split()]
a += a[:2]
m = 0

for i in range(n):
    s = sum(a[i:i + 3])

    if s > m:
        m = s

print(m)