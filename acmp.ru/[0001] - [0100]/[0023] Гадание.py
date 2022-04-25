n = int(input())
rez = 0

for i in range(1, n + 1):
    if n % i == 0:
        rez += i

print(rez)
