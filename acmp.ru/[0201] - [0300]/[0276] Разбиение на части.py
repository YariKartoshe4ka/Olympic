n, m = [int(i) for i in input().split()]

b, p = n // m, n / m % 1
a = round(m * p)

print((str(b) + ' ') * (m - a) + (str(b + 1) + ' ') * a)
