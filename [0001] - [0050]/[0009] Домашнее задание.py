n = int(input())
a = input().split(' ')
s = 0
u = 1

for i in range(n): a[i] = int(a[i])

for i in a:
    if i > 0:
        s += i

start = a.index(min(a))
stop = a.index(max(a))

if start < stop:
    for i in a[start+1:stop]:
        u *= i
else:
    for i in a[start-1:stop:-1]:
        u *= i

print(str(s), str(u))
