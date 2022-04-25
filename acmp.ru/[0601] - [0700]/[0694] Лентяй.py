l, r = 1, 31

for _ in range(int(input())):
    flag = 0
    nl, nr = [int(i) for i in input().split()]

    if l <= nl <= r or l <= nr <= r:
        l, r = max(l, nl), min(r, nr)
    else:
        print('NO')
        break
else:
    print('YES')
