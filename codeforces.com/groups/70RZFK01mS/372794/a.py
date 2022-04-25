w, h, l, k = map(int, input().split())

if k == 0:
    if w > 2 and h > 2 and l > 2:
        a = (w - 2) * (h - 2) * (l - 2)
    else:
        a = 0

elif k == 1:
    if w > 1 and h > 1 and l > 1:
        a = (w - 2) * (h - 2) * 2 + (w - 2) * (l - 2) * 2 + (h - 2) * (l - 2) * 2
    else:
        a = 0

elif k == 2:
    if w > 1 and h > 1 and l > 1:
        a = (w - 2) * 4 + (h - 2) * 4 + (l - 2) * 4
    elif (w == 1 and h > 2 and l > 2) or (h == 1 and w > 2 and l > 2) or (l == 1 and w > 2 and l > 2):
        a = w * h * l - (w + h + l - 3) * 2
    else:
        a = 0

elif k == 3:
    if w == 1 and h > 2 and l > 2:
        a = (h - 2) * 2 + (l - 2) * 2
    elif h == 1 and w > 2 and l > 2:
        a = (w - 2) * 2 + (l - 2) * 2
    elif l == 1 and w > 2 and l > 2:
        a = (w - 2) * 2 + (l - 2) * 2
    else:
        if w > 1 and h > 1 and l > 1:
            a = 8
        else:
            raise Exception


elif k == 4:
    if (w == 1 and h > 2 and l > 2) or (h == 1 and w > 2 and l > 2) or (l == 1 and w > 2 and l > 2):
        a = 4
    else:
        if h == w == 1 and l > 2:
            a = l - 2
        elif h == l == 1 and w > 2:
            a = w - 2
        elif w == l == 1 and h > 2:
            a = h - 2
        else:
            a = 0

elif k == 5:
    raise Exception

else:
    a = 1 if w == h == l == 1 else 0

print(a)
