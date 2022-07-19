#include <iostream>
#include <iomanip>
using namespace std;
class Dorm{
	public:
		float price;
		int type;
		Dorm(float airRoom,float unit);
		Dorm(float fanRoom);
		void showPrice(){
			if (type==0){
				cout << "Price of Air Rooom = "<< price<<endl;
			}
			else if (type==1){
				cout << "Price of Fan Rooom = "<< price<<endl;
			}
		}
		~Dorm(){
			cout << "Good bye" << endl;
		}
};
Dorm::Dorm(float airRoom,float unit){
			price = airRoom+(unit*10);
			type = 0;
		}
Dorm::Dorm(float fanRoom){
			price = fanRoom+300;
			type = 1;
		}
main(){
	cout << fixed <<setprecision(2);
	Dorm room1(6500,8);
	Dorm room2(5500);
	Dorm room3(room1);
	room1.showPrice();
	room2.showPrice();
	room3.showPrice();
}