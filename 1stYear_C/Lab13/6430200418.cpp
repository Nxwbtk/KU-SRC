#include <iostream>
#include <iomanip>
using namespace std;
class ABC {
	public:
		int electric,water;
		float elec_p,water_p,total;
		int showPrice (){
			cout <<"Enter electric unit: "; cin>>electric;
			elec_p = electric*15;
			cout <<"Electric price = " << elec_p<<endl; 
			cout <<"Enter water unit: "; cin>>water;
			water_p = water*30;
			cout <<"Electric price = " << water_p<<endl;
			total = elec_p+water_p;
			return (total);
		}
};
class Fan : public ABC {
	public:
		float fan_p;
		float sumf;
		float showFan(int price){
			sumf = ABC::showPrice();
			fan_p = price + sumf;
			return(fan_p);
		}
};
class Air : public ABC{
	public:
		float air_p;
		float suma;
		float showAir(int price){
			suma = ABC::showPrice();
			air_p = price + suma;
			return (air_p);
		}
};
class Vip : public ABC {
	public:
		float vip_p;
		float sumv ;
		float showVip(int price){
			sumv = ABC::showPrice();
			vip_p = price + sumv;
			return (vip_p);
		}
};

main (){
	int select_r;
	float total_price;
	Fan froom;
	Air aroom;
	Vip vroom;
	cout<<fixed<<setprecision(2);
	cout << "Type of room ->>> 1.Fan Room\t2.Air Room\t3.Vip Room" << endl;
	cout << "Please slect type of room : ";
	cin >> select_r;
	if (select_r==1){
		cout << endl << "***************************************************\n" <<endl;
		total_price = 0;
		total_price = froom.showFan(2500);
		cout << "Fan Room total price = "<< total_price << endl;
	}
	else if (select_r==2){
		cout << endl << "***************************************************\n" <<endl;
		total_price = 0;
		total_price = aroom.showAir(3500);
		cout << "Air Room total price = "<< total_price << endl;
	}
	else if (select_r==3){
		cout << endl << "***************************************************\n" <<endl;
		total_price = 0;
		total_price = vroom.showVip(10000);
		cout << "Vip Room total price = "<< total_price << endl;
	}
}