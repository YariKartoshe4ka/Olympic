x1, y1, x2, y2 = [int(i) for i in input().split()]
xa, ya = [int(i) for i in input().split()]

if x1 == x2:
    print((x1 - xa) * 2 + xa, ya)
else:
    print(xa, (y1 - ya) * 2 + ya)