def check(arr):
    res = [i for i, bit in enumerate(arr) if bit == "l"]
    err = res[0]
    for i in res[1:]:
        err ^= i
    return err

arr = input()
print(check(arr))