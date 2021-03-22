from math import pi, sqrt

s, r1 = [float(i) for i in input().split()]

print(f'{sqrt((r1 * r1 * pi - s) / pi):.03f}')