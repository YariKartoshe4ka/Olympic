n = int(input())

inc = 1
f = 1

ans = []

for y in range(n * 2 + 3):
    if y == 0:
        ans += [(x, y) for x in range(3)]

    elif y == n * 2 + 2:
        ans += [(x, y) for x in range(0, 3 * -inc, -inc)]

    else:
        if f == 0:
            ans += [(x, y) for x in range(-2, 3)]

        else:
            ans += [(0, y),  (2 * f, y)]

        if f % 2:
            inc = -inc

        f += inc


print(len(ans))

for i in ans:
    print(*i)
