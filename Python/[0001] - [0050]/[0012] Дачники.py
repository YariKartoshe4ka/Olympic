n = int(input())
d = []
rez = 0

for i in range(n):
    d.append(input().split(' '))

for i in range(len(d)):
    for j in range(len(d[i])):
        d[i][j] = int(d[i][j])

def product(Px, Py, Ax, Ay, Bx, By):
    return (Bx - Ax) * (Py - Ay) - (By - Ay) * (Px - Ax)

for i in d:
    if i[2] == i[3] == i[4] == i[5] == i[6] == i[7] == i[8] == i[9]:
        if i[2] == i[0] == i[1]:
            rez += 1
            continue

    p1 = product(i[0], i[1], i[2], i[3], i[4], i[5])
    p2 = product(i[0], i[1], i[4], i[5], i[6], i[7])
    p3 = product(i[0], i[1], i[6], i[7], i[8], i[9])
    p4 = product(i[0], i[1], i[8], i[9], i[2], i[3])

    if (p1 < 0 and p2 < 0 and p3 < 0 and p4 < 0) or (p1 > 0 and p2 > 0 and p3 > 0 and p4 > 0):
        rez += 1

print(rez)
