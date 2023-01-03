# cook your dish here
t=int(input())
for i in range(t):
    n=int(input())
    Cannot_pick=0
    ar=list(map(int,input().split(" ")))
    # if(ar.contains(""))
    for ele in ar:
        if(ele<2):
            Cannot_pick=1 
            break    
    if(Cannot_pick!=1):
        if(ar.count(2)==n or n==1):
            print(n*2)
        else:
            ar=sorted(ar)
            if(ar[0]==2):
                # print(ar)
                print(sum(ar))
            else:
                ar[0]=2
                # print(ar)
                print(sum(ar))
    else:
        print("-1")
