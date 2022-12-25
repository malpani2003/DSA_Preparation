# cook your dish here
t=int(input())
for i in range(t):
    m,x,y=map(int,input().split(" "))
    police_pos=list(map(int,input().split(" ")))
    new_pos=set()
    house_covered=x*y
    for ele in police_pos:
        for j in range(ele,ele-1-house_covered,-1):
            if(j>=1):
                new_pos.add(j)
        for j in range(ele,ele+1+house_covered):
            if(j<=100):
                new_pos.add(j)
    print(100-(len(new_pos)))
