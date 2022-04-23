for _ in range(int(input())):
    r = int(input())

    if r <= 1399:
        d = 4
    elif r <= 1599:
        d = 3
    elif r <= 1899:
        d = 2
    else:
        d = 1

    print('Division', d)
