n = int(input())
a = list(map(int, input().split()))


def pref(a):
    p = [0]
    for i in a:
        p.append(p[-1] + i)
    return p


print(pref(sorted(a)))

for i in a:
    t = a.copy()
    t.remove(i)

    for j in range(1, 11):
        print(pref(t))
    break
