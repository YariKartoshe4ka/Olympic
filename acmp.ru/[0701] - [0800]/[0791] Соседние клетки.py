n = int(input())

r = []
if n > 8:
    r += [n - 8]

if n % 8 != 1:
    r += [n - 1]

if n % 8:
    r += [n + 1]

if n < 57:
    r += [n + 8]

print(*r)
