n = int(input())
ret = 2
while(n != 3):
    ret*=2
    n /= ret % 10
    if n == 3:
        break
print(ret)