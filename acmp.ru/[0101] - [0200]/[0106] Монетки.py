a = n = int(input())
for _ in range(n): a -= int(input())

print(min(n - a, a))
