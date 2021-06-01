import math

def solution(r, l):
    result = 0
    h = ((r*2)//l)
    if h % 2 == 0:
        h //= 2
        while h > 0:
            result += math.sqrt(r**2-((l*h))**2)*2 // l
            h -= 1
        return int(result*2)
    else:
        h /= 2
        while h > 0.5:
            result += math.sqrt(r**2-((l*h))**2)*2 // l
            h -= 1
        return int(result * 2 + math.sqrt(r**2-(l*h)**2)*2 // l)
r = float(input())
l = float(input())
print(solution(r, l))