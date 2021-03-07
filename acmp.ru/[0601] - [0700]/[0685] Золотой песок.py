a1, a2, a3, b1, b2, b3 = [int(i) for i in input().split()]
a = [a1, a2, a3]
b = [b1, b2, b3]

r = 0
for i in range(3):
    m1, m2 = max(a), max(b)
    r += m1 * m2
    a.remove(m1)
    b.remove(m2)

print(r)
