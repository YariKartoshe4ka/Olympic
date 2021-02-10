n = int(input())
rez = 1
s = list(range(1, n + 1))

for i in s:
    rez *= i

print(rez)
