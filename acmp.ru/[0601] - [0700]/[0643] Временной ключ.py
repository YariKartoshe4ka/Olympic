n = tn = int(input())

cnt = 0
while tn != 0:
    cnt += tn % 2
    tn //= 2

print(n + cnt)
