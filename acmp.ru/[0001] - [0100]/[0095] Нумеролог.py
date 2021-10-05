n = int(input())
cnt = 0

while n > 9:
    n = sum(map(int, list(str(n))))
    cnt += 1

print(n, cnt)
