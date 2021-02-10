n = int(input())
x = int(input())
r = 1

for i in range(n - x + 2, n + 1):
    r += 2 ** (i - 1)

print(r)