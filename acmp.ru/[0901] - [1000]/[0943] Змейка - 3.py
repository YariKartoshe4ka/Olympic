n, m, y, x = [int(i) for i in input().split()]

if y % 2 == 0:
    x = m - x + 1

print(m * (y - 1) + (x - 1))
