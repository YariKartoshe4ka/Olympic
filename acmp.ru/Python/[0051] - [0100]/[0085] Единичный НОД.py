def gcd(a, b):
    while a != 0 and b != 0:
        if a > b:
            a, b = b, a
        b %= a

    return a + b

n, m = [int(i) for i in input().split()]
print('1' * gcd(n, m))