##upper-case character
def isUpper(char):
    if((char>='A' ) and (char<='Z')):
        return True
    return False

## lower-case character
def isLower(char):
    if((char>='a') and (char<='z')):
        return True
    return False
##digit
def isDigit(num):
     if((num>='0') and (num<='9')):
         return True
     return False




def checkPassword(string):
    lower,upper,digit=0,0,0
    if(len(string)>=8):
        for s in string:
            if(s.islower()): lower+=1
            if(s.isupper()): upper+=1
            if(s.isdigit()): digit+=1
    if((lower>=1) and (upper>=1) and (digit>=1)):
        return True
    return False
string=input('enter password')
print(checkPassword(string))