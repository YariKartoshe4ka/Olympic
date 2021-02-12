n = int(input())
a = [int(i) for i in input().split(' ')]
o = []

s = sum(a)


for i in range(1, n // 2 + 2):
    t = s * i

    for j in range(1, i):
        t -= (i - j) * a[j - 1] + (i -  j) * a[-j]

    o.append(str(t))


""" s * 2 - a[0] - a[-1]))
    s * 3 - 2*a[0] - 2*a[-1] - a[1] - a[-2]))
    s * 4 - 3*a[0] - 3*a[-1] - 2*a[1] - 2*a[-2] - a[2] - a[-3]))
"""


t = str(o.pop())
print(' '.join(o) + ' ' + t + ' ' + ' '.join(reversed(o)) if n % 2 else ' '.join(o) + ' ' + ' '.join(reversed(o)))