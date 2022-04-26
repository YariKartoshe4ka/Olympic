s = input()

op = (s[1] == '+') - (s[1] == '-')

if s[0] == 'x':
    a, b = map(int, list(s[2] + s[4]))
    print(b - a * op)

elif s[2] == 'x':
    a, b = map(int, list(s[0] + s[4]))
    print((b - a) * op)

else:
    a, b = map(int, list(s[0] + s[2]))
    print(a + b * op)
