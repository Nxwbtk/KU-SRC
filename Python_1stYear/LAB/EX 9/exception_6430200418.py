import string,os
return_rate = 0.5

chr_list = list(string.ascii_uppercase + string.ascii_lowercase + (' '))
member_list = {}

class numeric_only(Exception): pass
class chr_eng(Exception): pass
class nostock(Exception): pass
class noyear(Exception): pass

def cal_return(stock:int, rate:int):
    result = stock*rate
    return result

def clear():
    if os.name == 'nt':
        os.system('cls')
    else:
        os.system('clear')

if __name__ == '__main__':
    clear()
    try:
        usr_name = input('Enter member name: ')
        for i in usr_name:
            if i not in chr_list:
                raise chr_eng()

        stock = float(input('Enter stock: '))
        year = float(input('Enter number of year: '))
        if year%1 != 0:
            raise numeric_only()
        year = int(year)
        if stock <= 0:
            raise nostock()
        if year <= 0:
            raise noyear()

    except ValueError:
        print('Enter number only!')

    except numeric_only:
        print('Enter integer only!')

    except chr_eng:
        print('The member name must be only English alphabet and space!!!')

    except nostock:
        print('The number of stock is more than zero !!!')

    except noyear:
        print('The number of year is more than zero !!!')

    else:
        member_list.update({usr_name : year})
        for i in range(year):
            money = cal_return(stock,return_rate)
            print(f'Year: {i+1}: {money}')
            stock += money/10
    finally:
        input('press Enter to exit.')