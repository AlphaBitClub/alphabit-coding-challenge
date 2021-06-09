def dayofweek(d, m, y):
    t = [0, 3, 2, 5, 0, 3,
         5, 1, 4, 6, 2, 4]
    y -= m < 3
    return ((y + int(y / 4) - int(y / 100)
             + int(y / 400) + t[m - 1] + d) % 7)


def CompareDates(D1, M1, A1, D2, M2, A2):
    if(A1 > A2):
        return -1
    elif(A1 == A2 and M1 > M2):
        return -1
    elif(A1 == A2 and M1 == M2 and D1 > D2):
        return -1
    elif (A1 == A2 and M1 == M2 and D1 == D2):
        return 0
    else:
        return 1


""" 
print("First Date (DD/MM/AAAA) : ")
D1 = int(input())
M1 = int(input())
A1 = int(input())
 """
D1, M1, A1, D2, M2, A2 = (int(x) for x in input().split(" "))
""" 
print("Second Date (DD/MM/AAAA) : ")
D2 = int(input())
M2 = int(input())
A2 = int(input())
 """

if(CompareDates(D2, M2, A2, 9, 9, 2009) == 0):
    print("1")
    quit()
elif(CompareDates(D2, M2, A2, 9, 9, 2009) == 1):
    print("0")
    quit()

else:
    Ret = 0
    Today = 0
    if(CompareDates(D1, M1, A1, 9, 9, 2009) == 1):
        D1 = 9
        M1 = 9
        A1 = 2009
        Ret = 0
    Today = dayofweek(D1, M1, A1)
    while(CompareDates(D1, M1, A1, D2, M2, A2) != -1):
        if(CompareDates(D1,M1,A1,9,9,2009)==0):
            Ret += 1
        if(M1 == 1 and Today == 5):
            Ret += 1
        if(M1 == 1 and Today == 3):
            Ret += 1
        if(M1 == 4 and Today == 0):
            Ret += 1
        if(M1 == 4 and Today == 1):
            Ret += 1
        if(M1 == 4 and Today == 4):
            Ret += 1
        if(M1 == 12 and Today == 5):
            Ret += 1
        D1 += 1

        if(D1 == 32):
            D1 = 1
            M1 += 1
            if(M1 == 13):
                M1 = 1
                A1 += 1
        Today += 1
        if Today == 7:
            Today = 0
    print(Ret)