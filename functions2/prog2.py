def isCollinear(x1,y1,x2,y2,x3,y3):
    #let p1=(x1,y1),p2=(x2,y2),p3=(x3,y3)

    if((y2-y1)*(x3-x2)==(y3-y2)*(x2-x1)): #slope between p1,p2=(y2-y1)/(x2-x1),slope between p2,p3=(y3-y2)/(x3-x2)
        return True
    return False
x1=int(input('x1'))
y1=int(input('y1'))
x2=int(input('x2'))
y2=int(input('y2'))
x3=int(input('x3'))
y3=int(input('y3'))
print(isCollinear(x1,y1,x2,y2,x3,y3))