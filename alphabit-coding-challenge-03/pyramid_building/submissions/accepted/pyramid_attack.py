import math
n = int(input())
k = int(input())
val = math.sqrt(n/k)
print("true" if int(val) == val else "false")