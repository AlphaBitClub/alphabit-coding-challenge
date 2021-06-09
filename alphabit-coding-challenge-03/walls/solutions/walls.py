n, m, ident, d, e, t, a, wid = 0, 0, 0, 0, 0, 0, 0, 0
wallarr = l = [None] * 100
wavearr = l = [None] * 100
flag = False

n, m = (int(x) for x in input().split(" "))
for i in range(n):
    ident, d, e= (int(x) for x in input().split(" "))
    tmp = [d, e]
    wallarr[ident - 1] = tmp
for i in range(m):
    t, a = (int(x) for x in input().split(" "))
    tmp = [t, a]
    wavearr[i] = tmp

ident = n - 1

a = wavearr[wid][1]

for i in range(n):
    wallarr[i][0] += wallarr[i][1] * wavearr[0][0]

while ((wid < m) and (not(flag))):
    if wallarr[ident][0] >= a:
        for i in range(n):
            wallarr[i][0] += wallarr[i][1]
        wid += 1
        if wid < m:
            a += wavearr[wid][1]
    else:
        if ident == 0:
            flag = True
        else:
            ident -= 1
            for  i in range(n):
                wallarr[i][0] += wallarr[i][1]
if flag:
    print("humanity in danger ")
else:
    print(ident + 1)