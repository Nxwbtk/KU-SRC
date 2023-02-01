from functools import reduce
from os import system,name

def clear():
    _ = system('cls')

def CalSaving(x, i, n):
    if n > 1 :
        result = (1+i)*CalSaving(x , i , n-1)
    elif n== 1 :
        result = x
    else:
        result = 0
    return result

def saving():
    try :
        money = float(input("Enter money : "))
        interest = float(input("Enter interest rate : "))
        year = int(input("Enter year : "))
    except ValueError:
        print("Please input numeric value.")
    else:
        ans = CalSaving(money,interest,year)
        print("Overall saving money : %.2f"%ans)
    finally:
        print("-"*5,"  End Saving Program  ","-"*5)
def score():
    lst_score = []
    i = 1
    while True :
        try:
            sc = int(input("Enter Score #%d: "%i))
        except :
            print("Input numeric value.")
        else :
            if sc < 0 :
                break
            else:
                lst_score.append(sc)
                i += 1
    print("List of score : ",lst_score)
    sum = reduce(lambda x,y : x+y ,lst_score)
    max = reduce(lambda x,y : x if x > y else y,lst_score)
    min = reduce(lambda x,y : x if x < y else y,lst_score)
    less50 = list(filter(lambda x : True if x < 50 else False,lst_score))
    print("Sum = ",sum)
    print("Max = ",max)
    print("Min = ",min)
    print("List of under 50 score = ",less50)
if __name__ == "__main__":
    while True:
        print(" 1. Saving money")
        print(" 2. Score calculation")
        print(" 0. Exit")
        choice = int(input("Enter choice : "))
        if choice == 0:
            break
        elif choice == 1 :
            saving()
        elif choice == 2 :
            score()
        
        input("press enter to continue")
        clear()