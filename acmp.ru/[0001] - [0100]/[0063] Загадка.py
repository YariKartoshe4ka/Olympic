from math import sqrt

b, c = [int(i) for i in input().split()]

d = sqrt(b ** 2 - 4 * c)

print(int(b - d) // 2, int(b + d) // 2)