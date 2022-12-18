def isPrime(num):
    if(num==1):
        return False
    elif(num==2):
        return True
    for i in range(2,num):
        if(num%i==0):
            return False
    return True

def nextPrime(num):
    while(num > 0):
        num=num+1
        if(isPrime(num) == True):
            return num

num=int(input('enter num'))
print(nextPrime(num))

