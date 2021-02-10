word = list(input())
out = [word[0]]

a = sorted(word[1:])
b = a[a.index(word[1]) + 1]

out.append(b)
c = sorted(word[1:])
c.remove(b)
out += c

print(''.join(out))
