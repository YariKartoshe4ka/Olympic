a, b = input().split()
a = int(a)
b = int(b)

def nod(a, b):
    while a != 0 and b != 0:
        if a < b:
            b %= a
        else:
            a %= b
    return a + b

print(a * b // nod(a, b))