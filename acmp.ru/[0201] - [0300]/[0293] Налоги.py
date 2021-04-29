n = int(input())
V = [int(i) for i in input().split()]
p = [int(i) for i in input().split()]
imax = 0

for i in range(1, n):
    if V[i] * p[i] > V[imax] * p[imax]:
        imax = i

print(imax + 1)