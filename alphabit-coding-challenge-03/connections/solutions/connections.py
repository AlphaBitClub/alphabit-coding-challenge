import math
def solution(c):
    o = int((1+math.sqrt(1+8*c))/2)
    return o

c = int(input())
print(solution(c))