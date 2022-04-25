n = int(input())
k = int(input())
x = int(input())
y = int(input())
r = 0


for i in range(1, n + 1):
    r += y if i % k == 0 else x

print(r)
