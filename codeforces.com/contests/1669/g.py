for _ in range(int(input())):
    n, m = map(int, input().split())

    a = [list(input()) for _ in range(n)]

    for x in range(m):
        cnt = 0

        for y in range(n):
            if a[y][x] == '*':
                a[y][x] = '.'
                cnt += 1
            elif a[y][x] == 'o':
                for py in range(1, cnt + 1):
                    a[y - py][x] = '*'
                cnt = 0

        if cnt:
            for py in range(cnt):
                a[y - py][x] = '*'

    for i in a:
        print(''.join(i))
