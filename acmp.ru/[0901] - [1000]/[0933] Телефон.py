a, b, c, t = [int(i) for i in input().split()]
print(t * b if t < a else (t - a) * c + a * b)
