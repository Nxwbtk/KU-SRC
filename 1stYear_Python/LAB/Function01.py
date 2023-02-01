from os import system, name

FoodMenu = ["ต้มยำกุ้ง", "แกงส้ม", "ต้มข่าไก่", "ขนมจีนน้ำยา", "แกงเขียวหวานไก่", "มัสมั่นไก่", "แพนงหมู", "แกงจืดหมูสับ"]

def clear():
    if name == 'nt':
        _ = system('cls')   # for windows
    else:
        _ = system('clear') # for mac and linux
def search_menu(food_name):
    if food_name in FoodMenu :
        result = 1
    else:
        result = 0
    return result
def add_menu(food_name):
    check = search_menu(food_name)
    if check == 0 :
        FoodMenu.append(food_name)
        result = 1
    else :
        result = 0
    return result
def edit_menu(idx) :
    check = 0 <= idx <= len(FoodMenu) - 1
    if check :
        food = input("Enter replace food menu : ")
        FoodMenu[idx] = food
        result = 1
    else :
        result = 0
    return result
def delete_menu (idx) :
    check = 0 <= idx <= len(FoodMenu) - 1
    if check :
        FoodMenu.pop(idx)
        result = 1
    else :
        result = 0
    return result


choice = 1
while True:
    print(FoodMenu)
    print("--- menu ----")
    print(" 0. exit ----")
    print(" 1. search ----")
    print(" 2. add -----")
    print(" 3. edit ----")
    print(" 4. delete ----")

    choice = int(input("Enter your choice :"))
    if choice == 0:
        break
    elif choice == 1:
        food = input("Enter your search menu : ")
        check = search_menu(food)
        if check == 1:
            print("Lucky ! ! ! You found your choice.")
        else:
            print("Sorry You miss your choice.")
    elif choice == 2:
	    food = input("Enter your new menu : ")
        check = add_menu(food) 
        if check == 1:
            print("New food is added successfully.")
            print(FoodMenu)
        else :
            print("Sorry, new food already exist in menu.")
    elif choice == 3:
        idx = int(input("Enter editing meno no."))
        check = edit_menu(idx)
        if check == 1:
            print("Food is edited successfully.")
        else :
            print("Invalid editing menu no.")
    elif choice == 4 :
        idx = int(input("Enter deleting meno no."))
        check=delete_menu(idx)
        if check == 1 :
            print("Food is deleted successfully.")
        else :
            print("Invalid deleted menu no.")
    else :
        print("Please select choice from 0 to 4.")
    input("press enter to next choice..")
    clear()