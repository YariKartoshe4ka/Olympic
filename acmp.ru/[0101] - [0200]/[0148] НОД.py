a, b = [int(i) for i in input().split()]

while b:
    a, b = b, a % b

print(a)