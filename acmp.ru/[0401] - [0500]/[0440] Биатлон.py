f1 = f2 = f3 = f4 = f5 = cnt = 0

for _ in range(5):
    x, y = map(int, input().split())

    if not f1 and x**2 + y**2 <= 100:
        f1 = 1
        cnt += 1
    elif not f2 and (x - 25)**2 + y**2 <= 100:
        f2 = 1
        cnt += 1
    elif not f3 and (x - 50)**2 + y**2 <= 100:
        f3 = 1
        cnt += 1
    elif not f4 and (x - 75)**2 + y**2 <= 100:
        f4 = 1
        cnt += 1
    elif not f5 and (x - 100)**2 + y**2 <= 100:
        f5 = 1
        cnt += 1

print(cnt)
