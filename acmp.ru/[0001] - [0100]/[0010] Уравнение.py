a, b, c, d = [int(i) for i in input().split()]

for x in range(-100, 101):
    if a * x ** 3 + b * x ** 2 + c * x + d == 0:
        print(x, end=' ')
