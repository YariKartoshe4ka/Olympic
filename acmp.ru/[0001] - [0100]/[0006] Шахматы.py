s = {'A': 1, 'B': 2, 'C': 3, 'D': 4, 'E': 5, 'F': 6, 'G': 7, 'H': 8}

a = input()


try:
    x1 = s[a[0]]
    y1 = int(a[1])
    x2 = s[a[3]]
    y2 = int(a[4])

    assert 0 < y1 < 9 and 0 < y2 < 9 and a[2] == '-'

except (IndexError, KeyError, AssertionError, ValueError):
    print('ERROR')

else:
    if x2 - x1 == 1 and y2 - y1 == 2: print('YES')
    elif x2 - x1 == 1 and y1 - y2 == 2: print('YES')
    elif x1 - x2 == 1 and y1 - y2 == 2: print('YES')
    elif x1 - x2 == 1 and y2 - y1 == 2: print('YES')
    elif x2 - x1 == 2 and y2 - y1 == 1: print('YES')
    elif x2 - x1 == 2 and y1 - y2 == 1: print('YES')
    elif x1 - x2 == 2 and y1 - y2 == 1: print('YES')
    elif x1 - x2 == 2 and y2 - y1 == 1: print('YES')
    else: print('NO')
