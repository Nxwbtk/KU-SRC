from os import system,name


def clear():
    _ = system('cls')


def Cal_Return(stock, rate):
    result = stock * rate
    return result

if __name__ == "__main__":
    aplhabet = {'a','b'}
    dict_member = {}
    return_rate = 0.05
    member = input("Enter member name : ")
    stock = int(input("Enter stock : "))
    year = int(input("Enter number of years : "))
    for i in range(year):
        try :
            money = Cal_Return(stock,return_rate)
            print("year %d : %.2f" %(year,money))
            stock = stock + (money / 10)
        except ValueError :
            print("Enter numeri only!")
        except TypeError :
            print("Enter integer only!")


        finally :
            print ("-"*5," Exited the program ","-"*5)
        
        input("")
        clear()