###Student ID : 6430200418
### บุญทกานต์ ศิริกมลทิพย์

Faculty = ("Management", "Engineering", "Science", "Marine", "Economic")
print(Faculty)

'''
#Ex 07
start = int(input("Enter start position : "))
end = int(input("Enter end position : "))
check1 = 0 <= start <= len(Faculty)-1
check2 = 0 <= end <= len(Faculty)-1

if check1 and check2 :
    print(Faculty[start:end])
    print("This is your list of faculty.")
else :
    print("Invalid start or end position.")
'''
#Ex 08
search = input("Enter faculty : ")
if search in Faculty :
    print("You are studying at KU Sriracha campus.")
else:
    print("Sorry,you aren’t studying there.")