while(True):
    
    plist = []
    balance = input()
    if (len(balance) == 1 and balance == "."):
        break
    check = True
    for i in range(len(balance)) :
        if (balance[i] == "(" or balance[i] == "["):
            plist.append(balance[i])
        elif (balance[i] == ")") :
            if plist:
                if(plist[-1] == "("):
                    plist.pop()
                else:
                    check = False
                    break
            else:
                plist.append(balance[i])
            
        elif (balance[i] == "]"):
            if plist:
                if(plist[-1] == "["):
                    plist.pop()
                else:
                    check = False
                    break
            else:
                plist.append(balance[i])
 
    if len(plist) > 0 :
        check = False

    if (check == True) :
        print("yes")
    else :
        print("no")


    
