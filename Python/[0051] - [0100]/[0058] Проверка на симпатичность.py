rez = list()
c = 0

def read(h, w, matrix):
    for i in range(w - 1):
        for j in range(h - 1):
            if matrix[j][i] == 0 and matrix[j + 1][i] == 0 and matrix[j][i + 1] == 0 and matrix[j + 1][i + 1] == 0:
                return 'NO'
            elif matrix[j][i] == 1 and matrix[j + 1][i] == 1 and matrix[j][i + 1] == 1 and matrix[j + 1][i + 1] == 1:
                return 'NO'

    return 'YES'


for n in range(int(input())):
    h, w = [int(i) for i in input().split(' ')]


    matrix = []
    for i in range(h):
        matrix.append([int(j) for j in input().split(' ')])


    r = read(h, w, matrix)
    if r == None:
        rez.append('YES')
    else:
        rez.append(r)


print('\n'.join(rez))
