n, bx, by, l = map(int, input().split())

for i in range(n):
    ax, ay = map(int, input().split())

    if ((ax - bx)**2 + (ay - by)**2)**0.5 <= l:
        print(i + 1)
        break
else:
    print('Yes')
