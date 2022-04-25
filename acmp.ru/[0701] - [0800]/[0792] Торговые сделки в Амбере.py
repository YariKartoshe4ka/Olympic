def count(number, base):
    cnt = 0

    while number != 0:
        cnt += number % base
        number //= base

    return cnt


k1 = count(*map(int, input().split()))
k2 = count(*map(int, input().split()))

print(k1 if k1 == k2 else 0)
