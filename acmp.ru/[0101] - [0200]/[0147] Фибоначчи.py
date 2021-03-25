a, b = 0, 1

for i in range(int(input())):
    a, b = b, b + a

print(a)