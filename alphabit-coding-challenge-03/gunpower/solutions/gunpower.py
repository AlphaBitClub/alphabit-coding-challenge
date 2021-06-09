TAB=[]

N,B=[int(s) for s in input().split(" ")]

TAB = [int(x) for x in input().split(" ")] 
count=0

#or you make a loop for sorting the table

TAB.sort()

for i in range(len(TAB)):

    if(B>=TAB[i]):

        B=B-TAB[i]

        count+=1

print(count)