n, t = map(int, input().split())
a = list(map(int, input().split()))
p = int(input())

x, l, r = a[p - 1], a[0], a[-1]

if x - l > t and r - x > t:
    if x - l <= r - x:
        print(x - l + r - l)
        print(*(list(range(p, 0, -1)) + list(range(p + 1, n + 1))))

    else:
        print(r - x + r - l)
        print(*(list(range(p, n + 1)) + list(range(p - 1, 0, -1))))

elif x - l <= t:
    print(r - l)
    print(*range(1, n + 1))

else:
    print(r - l)
    print(*range(n, 0, -1))
