n, m, i, j, c = [int(i) for i in input().split()]

if n * m % 2 == 0:
    print('equal')
else:
    if (i + j) % 2 == 0:
        print('white' if c else 'black')
    else:
        print('black' if c else 'white')
