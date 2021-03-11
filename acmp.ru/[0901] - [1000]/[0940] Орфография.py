k, s = [i for i in input().split() if i != '']
print(s[:int(k) - 1] + s[int(k):])
