from itertools import permutations


a = list(map(int, input().split()))

m = float('inf')
ans = None


for i in permutations(a):
    a, b, c, d = i
    t = a / b + c / d

    if t < m:
        m = a / b + c / d
        ans = i

print(*ans)
