def isPerfect(n):
    sum=0
    for i in range(1,n):
        if(n%i==0):
            sum+=i
    if(sum==n):
            return True
    return False
n=int(input('enter n'))
print(isPerfect(n))

#start=1
#limit=10000
print('perfect numbers from 1 to 10,000 are:')
for i in range(1,10000):
    if isPerfect(i):
        print(i)