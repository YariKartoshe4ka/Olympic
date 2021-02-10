gcd = int(input())
lcm = int(input())

a = lcm / gcd


if a % 1: # Если a - float
    print(-1)
else:
    print(gcd, lcm)
