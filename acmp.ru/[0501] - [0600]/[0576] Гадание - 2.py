from math import gcd


n = int(input())
ans = 0

for i in range(1, n):
    ans += gcd(n, i) == 1

print(ans)
