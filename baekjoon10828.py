import sys
input = sys.stdin.readline

List = []

n = int(input())

for i in range(n):
    
    command = list(input().split())

    if command[0] == "push":
        List.append(command[1])

    elif command[0] == "pop" :
        try:
            print(List.pop())
        except:
            print(-1)

    elif command[0] == "size" :
        print(len(List))

    elif command[0] == "empty" :

        if(len(List) == 0):
            print(1)
        else:
            print(0)

    elif command[0] == "top" :
        try:
            print(List[-1])
        except:
            print(-1)
    
