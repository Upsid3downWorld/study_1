File = []

k = int(input())

for i in range(k):
    n = int(input())
    if ( n == 0 ) :
        File.pop()
    else:
        File.append(n)

if (len(File) == 0) :
    print(0)
else :
    print(sum(File))
    
