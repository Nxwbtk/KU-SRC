import numpy as np
from os import system
import random as rd


def clear():
    _ = system('cls')

def pickcard() :
    red = int(input("ใส่จำนวนใบแดง : "))
    black = int(input("ใส่จำนวนใบดำ : "))
    red_count = 1
    while True :
        userrand = int(input("ตัวเลขของคุณ : "))
        rad = rd.randint(0,1)
        if userrand == rad :
            if red != 0 :
                print("คุณได้ใบแดง")
                print("ออกใบแดงครั้งที่ %d"%red_count)
                red-=1
                red_count+=1
            elif red <= 0 :
                print("ได้ใบแดงครบจำนวนแล้ว")
                break
            
        elif userrand != rad :
            if black != 0 :
                print("คุณได้ใบดำ")
                black-=1
                continue
            elif black <= 0 :
                print("ใบดำหมดแล้วจับใหม่")
                continue
def rsp() :
    no_wins = 0
    no = 0
    while no_wins <= 10 :
        no += 1
        print("-"*5,"play #%d times"%no,"-"*5)
        print("1. rock")
        print("2. paper")
        print("3. scissors")
        choice = int(input("select your choice : "))
        com = np.random.randint(low=1,high=3)
        wins = ((choice == 1) and (com == 3)) or ((choice == 2) and (com == 1)) or ((choice == 3) and (com == 2))
        
        if wins == True :
            no_wins += 1
            print("You win %d times."%no_wins)
        elif (com == choice):
            print("You draw.")
        else :
            print("You lost.")
    print("You play %d times"%no)


if __name__ == "__main__":
    while True :
        print("1. pick red/black card.")
        print("2. rock scissors paper.")
        print("0. exit")
        choice = int(input("enter your choice : "))
        if choice == 0:
            print("-"*5,"exit","-"*5)
            break
        elif choice == 1 :
            pickcard()
        elif choice == 2 :
            rsp()
        
        input("press enter to next choice..")
        clear()
        