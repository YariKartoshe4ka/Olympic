t1, t2 = [int(i) for i in input().split()]
mode = input()

if mode == 'freeze':
    print(min(t1, t2))
elif mode == 'heat':
    print(max(t1, t2))
elif mode == 'auto':
    print(t2)
else:
    print(t1)
