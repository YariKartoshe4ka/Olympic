trains = []
faster = {'name': '', 'speed': -1}

for i in range(int(input())):
    train = input()
    time = train.replace(' ', ':').split(':')
    if int(time[-2]) < int(time[-4]) or (time[-2] == time[-4] and time[-1] == time[-3]):
        time[-2] = int(time[-2]) + 24
    trains.append([train.split('"')[1],
                              int(time[-4]) * 60 + int(time[-3]),
                              int(time[-2]) * 60 + int(time[-1])])

for train in trains:
    speed = 650 * 60 / (train[2] - train[1])
    name = train[0]
    if faster['speed'] < speed or faster['speed'] == -1:
        faster['name'] = name
        faster['speed'] = speed

print(f'The fastest train is "{faster["name"]}".\nIts speed is {round(faster["speed"])} km/h, approximately.')