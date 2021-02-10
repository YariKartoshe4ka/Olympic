n, k = list(map(int, input().split(' ')))
o = list()


while n > 0:
    o.append(n % k)
    n //= k


o.reverse()
s = sum(o)
o = '*'.join(list(map(str, o)))
print(eval(o + '- ' + str(s)))
