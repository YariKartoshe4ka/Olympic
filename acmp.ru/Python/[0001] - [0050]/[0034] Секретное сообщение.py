a = input().split(' ')
end = int(a[1])
s = input()

for i in range(len(s)):
    if s.find(s[i:i+end], i) != -1 and s.find(s[i:i+end], i+1) != -1:
        print('YES')
        break
else:
    print('NO')