for _ in range(int(input())):
    input()
    s = list(filter(lambda x: x != '', input().split('W')))

    f = 1
    for i in s:
        if 'R' not in i or 'B' not in i:
            f = 0
            break

    print('YES' if f else 'NO')
