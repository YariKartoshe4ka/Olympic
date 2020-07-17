a = input()
b = input()
rez = 0

def go(a):
    n = len(a)
    a = list(a)
    b = a.copy()
    for i in range(1, n): b[i] = a[i - 1]
    b[0] = a[n - 1]
    return ''.join(b)

def search(a, b):
    for i in range(len(a)):
        if a[i:i+len(b)] == b:
            global rez
            rez += 1

for i in range(len(a) - len(b) + 1):
    search(a, b)
    a = go(a)

print(rez)