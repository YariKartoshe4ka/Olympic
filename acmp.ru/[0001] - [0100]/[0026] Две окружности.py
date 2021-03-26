from math import sqrt

x1, y1, r1 = [int(i) for i in input().split()]
x2, y2, r2 = [int(i) for i in input().split()]

k = sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)

print('YES' if k <= r1 + r2 and k >= abs(r1 - r2) else 'NO')
