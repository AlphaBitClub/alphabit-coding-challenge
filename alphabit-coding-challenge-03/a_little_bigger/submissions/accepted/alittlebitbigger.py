s = str(input())
def solution(w):
    i = len(w)
    run = True
    if len(set(list(w))) == 1 or "".join(sorted(list(w), reverse=True)) == w:
        return "kinda impossible"
    while run:
        x = sorted(list(w[i-2:]))
        t = max(loc for loc, val in enumerate(x) if val == w[i-2]) + 1
        if t == len(x):
            i -= 1
            continue
        ch = x.pop(t)
        tmp = w[:i-2]+ch+"".join(x)
        if tmp > w:
            w = tmp
            break
        else:
            i -= 1
        if i == 1:
            w = "kinda impossible"
            break
    return w
print(solution(s))