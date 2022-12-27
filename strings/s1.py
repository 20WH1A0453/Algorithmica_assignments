def removeMysteryLength(str):
    prev=0
    size=""
    while True:
        l=len(str)
        current=int(str[-1])
        size=current*10 +prev
        str=str[:l-1]
        if(size==l-1):
            return str
        prev=current

str=input("Enter string")
print(removeMysteryLength(str))
