from os import system, name

FoodMenu = ["ต้มยำกุ้ง", "แกงส้ม", "ต้มข่าไก่", "ขนมจีนน้ำยา", "แกงเขียวหวานไก่", "มัสมั่นไก่", "แพนงหมู", "แกงจืดหมูสับ"]

def clear():
    if name == 'nt':
        _ = system('cls')   # for windows
    else:
        _ = system('clear') # for mac and linux


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
        search_menu = input("Enter your search menu : ")
    
	elif choice == 2:
		add_menu = input("Enter your new menu : ")
	
	print(FoodMenu)
    input("press enter to next choice..")
    clear()
