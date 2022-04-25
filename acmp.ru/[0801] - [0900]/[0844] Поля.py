a, b = [int(i) for i in input().split()]
c = (a * b) ** 0.5
print(int(c) if c.is_integer() else 0)
