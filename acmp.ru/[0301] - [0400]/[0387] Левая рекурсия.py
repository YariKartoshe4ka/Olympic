cnt = 0

for i in range(int(input())):
    s = input()

    if s[0] == s[3]:
        cnt += 1

print(cnt)