n = int(input())
g = [int(x) for x in input().split(' ')]
box = [x  for x in input().split(' ')]

def main(guns,boxes):
  result=[]
  guns.sort()
  for b in boxes:
    lenght=len(guns)-1
    maximum=guns[lenght]
    minium=guns[0]
    if (b=='>'):
      result.append(maximum)
      guns.remove(maximum)
    elif (b=='<'):
      result.append(minium)
      guns.remove(minium)
  result.append(guns[0])
  res = str(result[0])
  for i in result[1:]:
    res += (' ' + str(i))
  return res

print(main(g, box))