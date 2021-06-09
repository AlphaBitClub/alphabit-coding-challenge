import math
x = float(input())
y = float(input())
def solution(x, y):
    x = math.log(x)
    y = math.log(y)
    result = math.ceil(y/x)
    return result
print(solution(x, y))