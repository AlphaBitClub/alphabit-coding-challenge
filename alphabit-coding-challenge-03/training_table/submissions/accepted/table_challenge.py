taille = int(input())
k=int(input())
tab=[int(x) for x in input().split(" ")]
t = taille // k
for i in range(t):
	for j in range(k-1):
		for m in range(j,k,1):
			if tab[m+i*k] < tab[j+i*k] :
		   		mina = tab[j+i*k]
		   		tab[j+i*k]=tab[m+i*k]
		   		tab[m+i*k] = mina
		   	
output=""
for i in range(taille):
	output+=str(tab[i])+" "

print(output)