from sys import exit

n, m = [int(i) for i in input().split()]

t = list()

for i in range(n):
    t.append(list())

    for j in input():
        if j == 'R':
            t[-1].append(4)

        elif j == 'G':
            t[-1].append(2)

        elif j == 'B':
            t[-1].append(1)

        else:
            t[-1].append(0)


for i in range(n):
    s = [int(j) for j in input().split()]

    for j in range(m):
        if t[i][j] & s[j] == t[i][j]:
            continue

        print('NO')
        exit()

print('YES')
