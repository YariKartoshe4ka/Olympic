masks = []

for i in range(int(input())):
    mask = []
    for x in input().split('.'):
        b = bin(int(x))
        mask.append(b[2:])

    masks.append(''.join(mask))
