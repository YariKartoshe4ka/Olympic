n = int(input())
F = [1] + [0] * n

for i in range(1, n + 1):
    F[i] = F[i - 1] + i

print(F[n])
