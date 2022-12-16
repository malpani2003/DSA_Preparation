# # cook your dish here

# First Method 
t=int(input())
for i in range(t):
    counting_dict=dict()
    n=int(input())
    for j in range(n):
        str=input().lower()
        for char in str:
            if(char in counting_dict.keys()):
                value=counting_dict[char]
                value+=1
                counting_dict[char]=value
            else:
                counting_dict[char]=1
    letters_required=["c","o","d","e","f","h"]
    for ele in letters_required:
        if(ele not in counting_dict):
            counting_dict[ele]=0
    c=counting_dict["c"]
    o=counting_dict["o"]
    d=counting_dict["d"]
    e=counting_dict["e"]
    h=counting_dict["h"]
    f=counting_dict["f"]
    Letter_avialble=[c,o,d,e,h,f]
    if(0 in Letter_avialble):
        minimum=0
    else:
        minimum=min(c//2,o,d,e//2,h,f)
    print(minimum)


# Second Solution

t=int(input())
for i in range(t):
    counting_dict=dict()
    n=int(input())
    s=""
    for j in range(n):
        s+=(input().lower())
    # print(s)
    c=s.count("c")
    o=s.count("o")
    d=s.count("d")
    e=s.count("e")
    h=s.count("h")
    f=s.count("f")
    minimum=min(c//2,o,d,h,f,e//2)
    print(minimum)
