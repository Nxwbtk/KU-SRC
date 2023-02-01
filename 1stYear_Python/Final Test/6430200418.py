# 1 
"""
from os import system
def clear():
    _ = system('cls')

Movie = ["Avatar", "Avengers", "Titanic", "Star Wars", "Jurassic World", "The Lion King", "Furious 7", "Frozen II"]
Income = [2847, 2797, 2194, 2048, 1671, 1518, 1450, 1450]

def add():
    new_name = input("Enter new movie name : ")
    if new_name in Movie :
        print("Already have this movie!")
    else :
        new_income = int(input("Enter New Income : "))
        Movie.append(new_name)
        Income.append(new_income)
    print(Movie)
    print(Income)

def edit():
    print("0.Avatar", "1.Avengers", "2.Titanic", "3.Star Wars", "4.Jurassic World", "5.The Lion King", "6.Furious 7", "7.Frozen II")
    edit_name = int(input("Enter index movie : "))
    if edit_name in range(len(Movie)):
        new_name = input("Enter new movie name : ")
        Movie[edit_name] = new_name
    else :
        print("Your index is out of range!!")
    print(Movie)

def delete():
    print("0.Avatar", "1.Avengers", "2.Titanic", "3.Star Wars", "4.Jurassic World", "5.The Lion King", "6.Furious 7", "7.Frozen II")
    del_id = int(input("Enter index movie : "))
    if del_id in range(len(Movie)):
        Movie.pop(del_id)
        Income.pop(del_id)
    else:
        print("Your index is out of range")
    print(Movie)
    print(Income)

def find() :
    find_name = input("Enter movie name : ")
    if find_name in Movie :
        id = tuple(Movie)
        find_ID = id.index(find_name)
        print("Income of", find_name, "=", Income[find_ID])
    else :
        print("Invalid Movie Name")




while True :
    print("-"*10)
    print("0. Exit")
    print("1. Add New movie and income")
    print("2. Edit movie name")
    print("3. Delete movie and income")
    print("4. Find movie name and income")
    print("-"*10)
    chioce = int(input("Select option : "))
    if chioce==0:
        break
    elif chioce==1 :
        add()
    elif chioce==2 :
        edit()
    elif chioce==3 :
        delete()
    elif chioce==4 :
        find()
    input("press enter to next choice..")
    clear()
"""
###

# 2

A = []
A_STD = list(filter(lambda x : (x>=80),A))
Morethan50 = []
more_than50 = list(filter(lambda x : (x>=50),Morethan50))


while True :
    print("0. Exit")
    print("1. Calculate function")
    choice = int(input("Enter choice : "))
    if choice==0:
        break
    if choice==1:
        
        while True :
            score = int(input("Enter Score : "))
            if score > 0 :
                A_STD(score)
                more_than50(score)
            else:
                break
        
        

    print("A Student =",A_STD)
    print("More than 50 =",more_than50)
        



# 3 



