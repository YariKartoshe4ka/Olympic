a = ''.join(sorted(input()))
b = ''.join(reversed(a))

a = a[a.rfind('0') + 1] + a[:a.rfind('0') + 1] + a[a.rfind('0') + 2:]

print(a, b)
