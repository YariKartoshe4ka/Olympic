n = input()
a = input().split(' ')
for i in range(len(a)):
    a[i] = int(a[i])

a.sort()

for i in range(len(a)):
    a[i] = str(a[i])

print(' '.join(a))
