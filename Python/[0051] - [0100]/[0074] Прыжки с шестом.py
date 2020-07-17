n, m = [int(i) for i in input().split(' ')]
flag = False
i = j = 0

ondelete = []

s = list(range(1, n + 1))

while True:
    v = s[i]
    if flag:
        j += 1
        ondelete.append(v)

        if v == m:
            print(j)
            break
        flag = not flag
    else:
        flag = not flag

    i += 1

    if i + 1 >= len(s):
        for a in ondelete:
            s.remove(a)
        i = 0
