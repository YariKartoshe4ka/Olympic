a = [1, 0, 0]

for i in input():
    if i == 'A':
        a[0], a[1] = a[1], a[0]
    elif i == 'B':
        a[1], a[2] = a[2], a[1]
    else:
        a[0], a[2] = a[2], a[0]

print(a.index(1) + 1)
