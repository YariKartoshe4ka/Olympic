a = int(input())
b = 0

while a > 0:
    if a % 2:
        b += 1
    a //= 2

print(b)
