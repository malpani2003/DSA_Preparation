# cook your dish here
t=int(input())
for i in range(t):
    n=int(input())
    votes_dic=dict()
    for j in range(n):
        name,vote=list(input().split(" "))
        if(vote=="+"):
            vote=1
        else:
            vote=-1
        votes_dic[name.lower()]=vote    
    print(sum(votes_dic.values()))
