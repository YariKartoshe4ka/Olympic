t = int(input())

for _ in range(t):
    n, r, b = map(int, input().split())

    k = r // (b + 1)
    d = r - k * (b + 1)

    for _ in range(b - d):
        print('R' * k + 'B', end='')

    print('R' * k, end='')

    if d:
        for _ in range(d):
            print('B' + 'R' * (k + 1), end='')

    print()
