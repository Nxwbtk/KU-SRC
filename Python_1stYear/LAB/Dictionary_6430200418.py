# 6430200418 นายบุญทกานต์ ศิริกมลทิพย์
import numpy as np

#7
KUSRC = set({"Management", "Engineering", "Science", "Marine", "Economics"})

KUBKK = set({"Agriculture", "Business", "Fisheries", "Humanities", "Science", "Engineering", "Education", "Economics"})

print(KUSRC)
print(KUBKK)

#8
print("รายชื่อคณะทั้งหมดในสองวิทยาเขต : ",KUSRC.union(KUBKK))
print("รายชื่อคณะที่มีทั้งสองวิทยาเขต : ",KUSRC.intersection(KUBKK))
print("รายชื่อคณะที่มีอยู่ในวิทยาเขตศรีราชาแต่ไม่อยู่ในวิทยาเขตบางเขน : ",KUSRC.difference(KUBKK))

#9
search = input("กรุณากรอกชื่อคณของคุณ : ")
if search in KUBKK.difference(KUSRC):
    print("คุณเรียนที่วิทยาเขตบางเขน")
elif search in KUSRC.difference(KUBKK):
    print("คุณเรียนที่วิทยาเขตศรีราชา")
elif search in KUBKK.intersection(KUSRC):
    print("คุณมีโอกาสได้ทั้งสองวิทยาเขต")
else :
    print("เสียใจด้วย คุณไม่ได้เรียนที่วิทยาเขตบางเขนหรือศรีราชา")
"""
#5
num_student = np.array([[100,150],[85,90],[75,70],[60,55]])
print("size of students : ",num_student.shape)
print(num_student)

#6
num_majors = np.array([0,0])
num_years = np.array([0,0,0,0])

for i in range(num_student.shape[0]):
    num_majors[0] += num_student[i,0]
    num_majors[1] += num_student[i,1]

print(num_majors)

for i in range(num_student.shape[1]):
    num_years[0] += num_student[0,i]
    num_years[1] += num_student[1,i]
    num_years[2] += num_student[2,i]
    num_years[3] += num_student[3,i]
print(num_years)

FoodPrice = {"ต้มยำกุ้ง" : 90, "แกงส้ม" : 60, "ต้มข่าไก่" : 60, "ขนมจีนน้ำยา" : 40, "แกงเขียวหวานไก่" : 40, "มัสมั่นไก่" : 50,
"แพนงหมู" : 40, "แกงจืดหมูสับ" : 30}
print(FoodPrice)
#4
i = 0
for name in FoodPrice :
    print(f"{i} : {name}")
    i += 1

delete_num = int(input("กรุณากรอกหมายเลขเมนูที่ต้องการลบ : "))
check = 0 <= delete_num <= len(FoodPrice) - 1

if check :
    food_name = list(FoodPrice.keys()) [delete_num]
    #print (food_name)
    FoodPrice.pop(food_name)
    print(FoodPrice)

else:
    print("หมายเลขเมนูที่ต้องการลบไม่ถูกต้อง")



#3
new_item = input("กรุณากรอกอาหารที่ต้องการเพิ่ม : ")
if new_item in FoodPrice :
    print("มีเมนูอาหารที่คุณต้องการเพิ่มอยู่แล้ว")
else :
    new_price = int(input("กรุณากรอกราคาอาหาร : "))
    FoodPrice.update({new_item: new_price})
    print(f"จำนวนอาหารทั้งหมด {len(FoodPrice)} รายการ")
    print(FoodPrice)






#2
search = input("กรุณาใส่อาหารที่ต้องการ : ")
if search in FoodPrice :
    print(f"{search}มีราคาเท่ากับ{FoodPrice.get(search)}บาท")
else :
    print("เสียใจ ไม่มีอาหารที่คุณต้องการ")

"""