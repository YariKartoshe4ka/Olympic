from sys import exit

a = [input() for i in range(4)]

for i in range(3):
    for j in range(3):
        if a[i][j] == a[i + 1][j] == a[i][j + 1] == a[i + 1][j + 1]:
            print('No')
            exit()
print('Yes')