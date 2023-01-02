import random
def getNumOfFlips():
    prev=-1
    n=0 #tosses
    while True:
        current=random.randint(0,1)
        print(current)
        n+=1
        if((prev==1 and current==1) or(prev==0 and current==0)):
            return n
        prev=current

print(getNumOfFlips())
min=1000000
max=0
sum=0
for i in range(10):
    res=getNumOfFlips()
    if(res<min):
        min=res
    if(res>max):
        max=res
    sum+=res
print(min,max,sum/10.0)