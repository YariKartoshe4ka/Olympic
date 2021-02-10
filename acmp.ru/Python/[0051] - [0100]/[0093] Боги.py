gods  = list()
names = list()

n1 = int(input())
for i in range(n1): gods.append([input(), 0])
n2 = int(input())
for i in range(n2): names.append(input())

for i in range(len(gods)):
    for name in names:
        e = 0

        if len(gods[i][0]) == len(name):
            for j in range(len(gods[i][0])):
                if gods[i][0][j] != name[j]:
                    e += 1

        if e == 1:
            gods[i][1] += 1

for god in gods:
    print(god[1], end=' ')