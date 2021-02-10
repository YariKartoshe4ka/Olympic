a = int(input())
b = int(input())
k = int(input())

while k > 0:
    x = (a - 1) * b
    y = a * (b - 1)

    if x > y:
        a -= 1
    else:
        b -= 1
    k -= 1

print(a, b)