slice = int(input())
e = '2.7182818284590452353602875'

if not slice:
    print(3)
elif slice == 25:
    print(e)
else:
    s = e[:slice + 3]
    
    if int(s[len(s) - 1]) >= 5:
        a = []
        for i in s:
            a.append(i)
        if int(a[len(a) - 2]) == 9:
            a[len(a) - 2] = '0'
            a[len(a) - 3] = str(int(a[len(a) - 3]) + 1)
        else:
            a[len(a) - 2] = str(int(a[len(a) - 2]) + 1)
            
        a = a[:len(a) - 1]
        print(''.join(a))
    else:
        print(s[:len(s) - 1])
