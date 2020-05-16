#!/usr/bin/python3
z = 0
for k in range(100, 999, 1):
    for j in range(k, 100, -1):
        i = int(j) * int(k)
        if i > z:
            x = str(i)
            if x == x[::-1]:
                z = i
                print(z)
