def isValidTriangle(a,b,c):
    if ((a>=b+c) or (b>=a+c) or (c>=a+b)):
        return False
    elif ((a<=0) or (b<=0) or (c<=a)):
        return False
    else: return True
print(isValidTriangle(20,4,5))
print(isValidTriangle(0,1,2))
print(isValidTriangle(4,3,5))