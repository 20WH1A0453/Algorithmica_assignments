def medianOfThree(num1,num2,num3):
    #possibilities (1,2,3),(1,3,2),(2,1,3),(2,3,1),(3,1,2),(3,2,1)
    if((num1<num2 and num2<num3) or (num1<num3 and num2>num3)):
        return num2
    if((num1>num2 and num2<num3) or (num1<num2) and (num2>num3)):
        return num1
    return num3

num1=int(input('enter num1'))
num2=int(input('enter num2'))
num3=int(input('enter num3'))
print(medianOfThree(num1,num2,num3))