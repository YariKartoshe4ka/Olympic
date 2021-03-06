n = int(input())
k = int(input())

a = []
d = [str(i) for i in range(0, 10, k)]

q = n

while q >= k:
    q //= len(d)
    a.append(d[q % len(d)])

a.append(d[q - 1])
#a.append(d[q - 1] if len(a) > 0 else d[q])
print(''.join(a))