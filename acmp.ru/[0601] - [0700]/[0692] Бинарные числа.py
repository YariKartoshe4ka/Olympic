from math import log2

n = int(input())

print('YES' if n > 0 and log2(n) == int(log2(n)) else 'NO')