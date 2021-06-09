import math

def distance(x1,y1,x2,y2):
	return math.sqrt((x2-x1)**2+(y2-y1)**2)	

x1,y1 = [int(d) for d in input().split(' ')]
x2,y2 = [int(d) for d in input().split(' ')]
x3,y3 = [int(d) for d in input().split(' ')]

lengths = sorted([distance(x1,y1,x2,y2), distance(x1,y1,x3,y3), distance(x2,y2,x3,y3)])

print(lengths[2]**2 == lengths[1]**2 + lengths[0]**2)