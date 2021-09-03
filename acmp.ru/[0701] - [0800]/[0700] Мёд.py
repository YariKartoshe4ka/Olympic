n, v, k = map(int, input().split())
flag = False
cnt = 0

for i in range(n):
    sub = v - i * k

    if sub > 0:
        cnt += sub
    else:
        flag = True

print('NO' if flag else 'YES', cnt)
