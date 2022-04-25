a = int(input())
b = int(input())
c = int(input())
d = int(input())
n = int(input()) * 7

x = n // (a + b)
n -= x * (a + b)
rez = x * (a * c + b * d)

while n > 0:
    if a > 0:
        rez += c
        a -= 1
    else:
        rez += d
        b -= 1
    n -= 1

print(rez)
