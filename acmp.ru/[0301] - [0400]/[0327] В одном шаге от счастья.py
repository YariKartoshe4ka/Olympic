for _ in range(int(input())):
    a = input()
    a1 = str(int(a) + 1)
    a2 = str(int(a) - 1)

    l1 = sum([int(i) for i in a1[-3:]])
    r1 = sum([int(i) for i in a1[:-3]])

    l2 = sum([int(i) for i in a2[-3:]])
    r2 = sum([int(i) for i in a2[:-3]])

    print('Yes' if l1 == r1 or l2 == r2 else 'No')