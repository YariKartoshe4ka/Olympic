s = input()
x, y = ord(s[0]) - 64, int(s[1])

print('BLACK' if x % 2 == y % 2 else 'WHITE')