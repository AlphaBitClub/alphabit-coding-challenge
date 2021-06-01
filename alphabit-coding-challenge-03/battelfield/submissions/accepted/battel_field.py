n = int(input())

taile = []

for i in range(n):
	tab = input().split(" ")
	t = [int(tab[i]) for i in range(2)]
	taile.append(t)

surface = 0
parts = 0
stand = taile[0]

if(taile[0][0]>=taile[0][1]):

	for i in range(1,n):
		parts   += stand[1]*taile[i][0]
		surface += taile[i][0]*taile[i][1]
else:
	
	for i in range(1,n):
		parts   += stand[0]*taile[i][1]
		surface += taile[i][0]*taile[i][1]


surface+=stand[0]*stand[1]


print(surface-parts)