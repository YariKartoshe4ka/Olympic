a = input().split(' ')
rez1 = 0
rm = []
a = [list(a[0]), list(a[1])]

for i in range(4):
    if a[0][i] == a[1][i]:
        rez1 += 1
        rm.append(a[0][i])

for i in rm:
    a[0].remove(i)
    a[1].remove(i)

rez2 = len(a[0]) + len(a[1]) - len(set(a[0] + a[1]))

print(rez1, rez2, sep=' ')
