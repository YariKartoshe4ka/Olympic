n = int(input())
cnt = 0

while n != 6174:
    right = ''.join(sorted(str(n).ljust(4, '0')))
    left = right[::-1]
    n = int(left) - int(right)

    cnt += 1

print(n)
print(cnt)