count = 0
run = True
n, m, k = [int(i) for i in input().split(' ')]

if n < m and n <= k:
    print('NO')
else:
    while run:
        count += 1

        m -= n

        if m <= 0:
            run = False
        else:
            m += k

    print(count)