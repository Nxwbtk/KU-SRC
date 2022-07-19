###Student ID : 6430200418
### บุญทกานต์ ศิริกมลทิพย์
"""
FoodMenu = ["ต้มยำกุ้ง","แกงส้ม","ต้มข่าไก่","ขนมจีนน้ำยา","แกงเขียวหวานไก่","มัสมั่นไก่","แพนงหมู","แกงจืดหมูสับ"]
print(FoodMenu)
"""
'''
#EX 2 
Fname = input("Enter your foond name : ")
if Fname in FoodMenu :
  print("Lucky!!! You found your choice.")
else :
  print("Sorry, you miss your choice. ")


#EX 3
FoodMenu.append(input("Enter new menu : "))
print("Count of Menu is ",len(FoodMenu))
print(FoodMenu)

#EX 4
for i in range(len(FoodMenu)):
    print(i+1, ":", FoodMenu[i])
Dmenu = int(input("Enter deleting item : "))-1
check = 0 <= Dmenu < len(FoodMenu)
if check :
    FoodMenu.pop(Dmenu)
    print("Deleted item successfully.")
    print(FoodMenu)
else :
    print("Invalid item no.")

#EX 5
for i in range(len(FoodMenu)):
    print(i, ":", FoodMenu[i])
i = int(input("Enter edit item : "))
updated = input("Enter update item : ")
check = 0 <= i < len(FoodMenu)
if check :
    FoodMenu[i] = updated
    print("Update item successfully.")
    print(FoodMenu)
else :
    print("Invalid item no.")
'''

string1 = input("Enter String : ")
keyword = input("Keyword : ")

end = len(keyword)
start = string1.find(keyword)
print(start)
print(end)