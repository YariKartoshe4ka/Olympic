w, h, r = [int(i) for i in input().split()]
print('YES' if w >= r * 2 and h >= r * 2 else 'NO')