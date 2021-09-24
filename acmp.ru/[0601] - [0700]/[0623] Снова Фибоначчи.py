n = int(input())
a = b = 1

for i in range(n % 60):
    a, b = (a + b) % 10, a

print(b)
