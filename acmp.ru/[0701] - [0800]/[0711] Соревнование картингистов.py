n, m = [int(i) for i in input().split()]
a = {}

for _ in range(n):
    name = input()
    a[name] = sum([int(i) for i in input().split()])

print(min(a, key=a.get))
