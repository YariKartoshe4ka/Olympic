from math import sqrt

x1, y1, x2, y2, x3, y3 = [int(i) for i in input().split()]
a = sqrt((x2 - x1)**2 + (y2 - y1)**2)
b = sqrt((x2 - x3)**2 + (y2 - y3)**2)
c = sqrt((x3 - x1)**2 + (y3 - y1)**2)
p = (a + b + c) / 2

print(f'{sqrt(p * (p - a) * (p - b) * (p - c)):.01f}')
