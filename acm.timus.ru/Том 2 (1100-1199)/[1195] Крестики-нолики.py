a = [list(input()), list(input()), list(input())]


def make_win(c):
    for i, row in enumerate(a):
        if row.count(c) == 2 and row.count('#') == 1:
            return (i, row.index('#'))

    for col in range(len(a)):
        row = [a[0][col], a[1][col], a[2][col]]
        if row.count(c) == 2 and row.count('#') == 1:
            return (row.index('#'), col)

    row = []
    for i in range(len(a)):
        row.append(a[i][i])

    if row.count(c) == 2 and row.count('#') == 1:
        return (row.index('#'), row.index('#'))

    row = []
    for i in range(len(a)):
        row.append(a[i][2 - i])

    if row.count(c) == 2 and row.count('#') == 1:
        return (2 - row.index('#'), row.index('#'))

    return (-1, -1)


def count_wins(c, A=a):
    r = 0

    for i, row in enumerate(A):
        if row.count(c) == 2 and row.count('#') == 1:
            r += 1

    for col in range(len(A)):
        row = [A[0][col], A[1][col], A[2][col]]
        if row.count(c) == 2 and row.count('#') == 1:
            r += 1

    row = []
    for i in range(len(A)):
        row.append(A[i][i])

    if row.count(c) == 2 and row.count('#') == 1:
        r += 1

    row = []
    for i in range(len(A)):
        row.append(A[i][2 - i])

    if row.count(c) == 2 and row.count('#') == 1:
        r += 1

    return r


def print_a():
    for i in a:
        print(*i, sep='')


def find_blank(c):
    def copy(a):
        b = []
        for i in a:
            b.append(i.copy())
        return b

    best = (-1, -1)
    best_n = -1

    for i in range(3):
        for j in range(3):
            if a[i][j] == '#':
                b = copy(a)
                b[i][j] = c

                t = count_wins(c, b)

                if t > best_n:
                    best_n = t
                    best = (i, j)

    return best


def main():
    f = True
    while True:
        if f:
            pos = make_win('X')
        else:
            pos = make_win('O')

        if pos != (-1, -1):
            if f:
                return 'Crosses win'
            else:
                return 'Ouths win'

        else:
            if f:
                i, j = make_win('O')
                if (i, j) == (-1, -1):
                    i, j = find_blank('X')

                a[i][j] = 'X'
            else:
                i, j = make_win('X')
                if (i, j) == (-1, -1):
                    i, j = find_blank('O')

                a[i][j] = 'O'

        check = True
        for i in range(3):
            for j in range(3):
                if a[i][j] == '#':
                    check = False

        if check:
            return 'Draw'

        f = not f


print(main())
