path = input()
final_path=""
steps=[0,0]
for i in path:
    if i == "Z":
        steps[0]+=1
    elif i == "S":
        steps[0]-=1
    elif i == "Q":
        steps[1]+=1
    elif i == "D":
        steps[1]-=1


final_path = ' '.join([str(steps[0]),str(0)] if steps[0] >= 0 else [str(0), str( -steps[0])] )
final_path += ' ' +  ' '.join([str(steps[1]),str(0)] if steps[1] >= 0 else [str(0), str(-steps[1])] )

print(final_path)
