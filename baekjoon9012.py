n = int(input())

for i in range(n):
    plist = []
    ps = input()
    check = True
    for j in range(len(ps)) :
        if ps[j] == "(" :
            plist.append(ps[j])
        else :
            try:
                plist.pop()
            except:
                check = False
                break

    if len(plist) > 0 :
        check = False

    if (check == True) :
        print("YES")
    else :
        print("NO")
                
