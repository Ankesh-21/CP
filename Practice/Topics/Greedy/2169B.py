def solve():
    s = input()
    firstGreater = -1
    lastLesser = -1
    numG = 0
    numL = 0
    for i in range(len(s)):
        if s[i] == '>' and firstGreater == -1:
            firstGreater = i
        if s[i] == '>':
            numG += 1
        if s[i] == '<' and lastLesser == -1 and firstGreater != -1:
            lastLesser = i
        if s[i] == '<':
            numL += 1
    if firstGreater != -1 and lastLesser != -1:
        print(-1)
        return 

    stars = 0
    cnt = 0
    # only possible sequenec is '<***>'
    for i in range(len(s)):
        if s[i] == '<':
            cnt += 1
        elif s[i] == '*':
            stars += 1
        else:
            break
    if '*<' in s or '>*' in s or '**' in s:
        print(-1)
        return
    if stars == len(s):
        if len(s) > 1:
            print(-1)
        else:
            print(1)
        return
    if (cnt > 0):
        print(max((cnt + stars),(len(s) - (stars + cnt) + stars)))
    else:
        print(len(s))

tc = int(input())
for _ in range(tc):
    solve()