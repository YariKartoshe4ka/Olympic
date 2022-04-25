s = input()
n = int(input())
h = [0] * n
r = []

for i in range(n):
    m = input()

    for j in range(len(m)):
        if m[j] != s[j]:
            h[i] += 1

for i in range(len(h)):
    if h[i] == min(h):
        r.append(str(i + 1))

print(len(r))
print(' '.join(r))
