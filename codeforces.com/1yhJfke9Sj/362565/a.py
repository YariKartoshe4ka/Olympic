n = int(input())
a = [tuple(map(int, input().split())) for _ in range(n)]

a.sort()

ans = 0
w, h = a.pop()

while a:
    wi, hi = a.pop()

    if wi < w:
        ans += h
        w, h = wi, hi

ans += h

print(ans)
