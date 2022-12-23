#decimal to any radix
def base10_to_Arbitrary(num):
    rev_num,p=0,1
    while(num>=1):
        rem=num%base
        rev_num=rev_num+rem*p
        num=num//2
        p=p*10
    return rev_num


#any radix to decimal
def arbitrary_to_base10(num):
    sum=0
    for i in range(0,num):
        rem=num%10
        sum=sum+rem*(pow(base,i))
        num=num//10
    return sum

def convertBase(num):
    if (base >= 2 and base <= 16):
        print(base10_to_Arbitrary(num))
        print(arbitrary_to_base10(num))
    else:
        print('Base is out of range ')

num=int(input('Enter number'))
base=int(input('Enter base'))
convertBase(num)
print()
