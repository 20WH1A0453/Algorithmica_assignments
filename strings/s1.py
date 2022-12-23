def removeMysteryLength(str):
    for i in range(1,len(str)):
        if(len(str)<=9): #if length of string is one digit
            return str[0:len(str)-i]
        elif(len(str)<=99): #if length of string is two digits
            return str[0:len(str)-i-1]
str=input("string")
print(removeMysteryLength(str))

