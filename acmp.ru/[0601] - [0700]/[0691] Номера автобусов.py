from re import match

for _ in range(int(input())):
    p = r'^[A,B,C,E,H,K,M,O,P,T,X,Y][0-9]{3}[A,B,C,E,H,K,M,O,P,T,X,Y]{2}$'
    print('Yes' if match(p, input()) else 'No')
