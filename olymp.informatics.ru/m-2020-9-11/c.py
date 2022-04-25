n, m = [int(i) for i in input().split(' ')]
c = 0

for i in range(m):
    l, r, k = [int(i) for i in input().split(' ')]

    if k == 1:
        c += r - l + 1
    else:
        for j in range(l, r + 1):
            if j % 2 == 0:
                c += 1

print(c // n)
