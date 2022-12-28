t=int(input())
for i in range(t):
    n=int(input())
    xpoint=list()
    ypoint=list()
    line=2
    for j in range(n):
        x,y=list(map(int,input().split(" ")))
        # print(xpoint,ypoint)
        # print(line)
        if(x not in xpoint and j>0):
            line+=1 
        if(y not in ypoint and j>0):
            line+=1
        xpoint.append(x)
        ypoint.append(y)
    print(line)
    
    
