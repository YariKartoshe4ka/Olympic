from math import sqrt

xa, ya = [int(i) for i in input().split()]
xb, yb = [int(i) for i in input().split()]

for i in range(int(input())):
    x, y = [int(j) for j in input().split()]

    la = sqrt((xa - x) ** 2 + (ya - y) ** 2)
    lb = sqrt((xb - x) ** 2 + (yb - y) ** 2)

    if la <= lb / 2:
        print(i + 1)
        break

else:
    print('NO')