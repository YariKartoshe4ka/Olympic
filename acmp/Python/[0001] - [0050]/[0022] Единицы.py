a = int(input())
b = []

while a > 0:
    b.append(a%2)
    a //= 2

b.reverse()
for i in range(len(b)): b[i] = str(b[i])
b = ''.join(b).replace('0', '')
print(len(b))
