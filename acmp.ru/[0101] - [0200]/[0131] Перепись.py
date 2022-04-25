p = 0
m = 0
flag = True

for i in range(int(input())):
    v, s = [int(i) for i in input().split()]

    if s and v > p:
        p = v
        m = i
        flag = False

print('-1' if flag else m + 1)
