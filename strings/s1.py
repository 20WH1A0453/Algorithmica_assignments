def removeMysteryLength(str):
    for i in range(1,len(str)):
        if(len(str)<=9):
            return str[0:len(str)-i]
        elif(len(str)<=99):
            return str[0:len(str)-i-1]
str=input("string")
print(removeMysteryLength(str))

