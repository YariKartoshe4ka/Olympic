s = input()
cnt = 0

for i in range(len(s) - 4):
    if s[i:i+5] == '<--<<' or s[i:i+5] == '>>-->':
       cnt += 1

print(cnt)
