a = input()
b = input()
c = input()

z = [a, b, c,
    (a + b + c)[::3], (a + b + c)[1::3], (a + b + c)[2::3],
    a[0] + b[1] + c[2], a[2] + b[1] + c[0]]

if 'XXX' in z:
    print('Win')
elif 'OOO' in z:
    print('Lose')
else:
    print('Draw')