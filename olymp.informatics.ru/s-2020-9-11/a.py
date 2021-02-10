x = int(input())

def convert(number, base):
    A = []
    while number > 0:
        A.append(str(number % base))
        number //= base

    return int(''.join(A))


m = -1
for i in range(2, 10):
    a = convert(x, i)

    if a > m: m = a

print(m)
