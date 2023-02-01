

def Factorial (n) :
    if n >= 1 :
        return n*Factorial(n-1)
    elif n == 0 :
        return 1
    else :
        print("Invalid number.")
        return -1
def Remain_Student(x,n) :
    if n>1 :
        return x*Remain_Student(x,n-1)
    elif n == 1 :
        return 100
    else :
        print("Invalid number.")
        return -1





ans = Factorial(15)
print("Factorial of 15 : %d"%ans)

ans = Remain_Student(0.9,5)
print("Remain 5th year Student : %d"%ans)

discount = lambda x,y : x*y/100
print("discount : ", discount(500,15))

checknumber = lambda x : 1 if str(x).isnumeric() else 0
print("check number : %d"%checknumber('5'))

calDiscount = lambda x : x*0.1 if x>=500 else x*0.05
print("Discount : %.2f"%calDiscount(100))

money = [500,1000,300,800]
calVat = lambda x:x*1.07
VAT = [calVat(i) for i in money]
print("VAT : ",VAT)

A = [1,2,3,4,5]
B = [2,4,6,8,10]

from functools import reduce
C = [reduce(lambda x,y: x+y , A)]
print(C)

C = [reduce(lambda x,y : x if x>y else y,B)]
print(C)

C = list(map(lambda x : x*3,A))
print(C)

C = list(filter(lambda x : x if x % 4 == 0 else 0,B))
print(C)