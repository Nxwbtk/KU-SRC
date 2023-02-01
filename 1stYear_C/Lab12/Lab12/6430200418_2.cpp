#include <iostream>
#include <iomanip>
using namespace std;
class Bank{
 public:
  float balance ;
  int type;
  Bank(float Ini_balance,float deposit,float interest);
  Bank(float Ini_balance,float withdraw);
	Money(){
            if(type==0){
                cout << "Balance after Deposit = " << balance << endl;
            }
            else if (type==1){
                cout << "Balance after Withdraw = " << balance << endl;
            }
        }
  ~Bank(){
            cout << "The transaction is complete."<<endl;
  }
};
Bank::Bank(float Ini_balance,float deposit,float interest){
		balance = Ini_balance + deposit+interest;
		type = 0;
  }
Bank::Bank(float Ini_balance,float withdraw){
		balance = Ini_balance - withdraw;
   		type = 1;
  }
main(){
 cout << fixed <<setprecision(2);
 Bank person1(5000,600,30);
 Bank person2(6000,2000);
 Bank person3(4000,1500);
 person1.Money();
 person2.Money();
 person3.Money();
}