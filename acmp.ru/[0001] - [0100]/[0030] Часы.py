start = input()
stop = input()

out = [0] * 10

while start != stop:
    for s in start.replace(':', ''):
        s = int(s)
        out[s] += 1

    start_c = start.split(':')
    for i in range(len(start_c)): start_c[i] = int(start_c[i])

    start_c[2] += 1

    if start_c[2] == 60:
        start_c[1] += 1; start_c[2] = '00'
        if start_c[1] == 60:
            start_c[0] += 1; start_c[1] = '00'
            if start_c[0] == 24: start_c[0] = '00';
    for i in range(len(start_c)): start_c[i] = str(start_c[i])

    if len(start_c[2]) != 2: start_c[2] = '0' +start_c[2]
    if len(start_c[1]) != 2: start_c[1] = '0' + start_c[1]
    if len(start_c[0]) != 2: start_c[0] = '0' + start_c[0]

    start = ':'.join(start_c)

for s in stop.replace(':', ''):
        s = int(s)
        out[s] += 1

for n in out: print(n)
