from math import log2, ceil


n = int(input())
x = ceil(log2(n))

print(x + 1 + bool(n > 2 ** (x - 1) * 1.5))
