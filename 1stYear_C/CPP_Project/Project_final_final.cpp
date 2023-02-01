#include <iostream>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <fstream>
#include <iomanip>
using namespace std;

class welcome{
	public :
	Print(double  y){
   		cout<<"      =====================================" <<endl;
    	cout<<"      1             Welcome               "<< y <<endl;
    	cout<<"      1               to                  "<< y <<endl;
    	cout<<"      1        Travel Calculator          "<< y <<endl;
    	cout<<"      ====================================="<<endl;
    	cout<<"\n\n"<<endl;
    }
    Print(int z){
    	cout << "       ===================================" <<endl;
    	cout << "       "<< z << "     For the best decision!!!    " << z << endl ;
    	cout << "       ===================================" << endl << endl<< endl;
	}
    Print(char* x){
    	cout << "==================================================" << endl;
    	cout << "|| \t      Please input your vehicle         " << x << endl;
    	cout << "==================================================" << endl;
    	cout << "|| \t      Vehicle                           " << x << endl;
    	cout << "|| \t      1.Airplane                        " << x << endl;
    	cout << "|| \t      2.Train(Central only)             " << x << endl;
    	cout << "|| \t      3.Bus                             " << x << endl;
    	cout << "|| \t      0.Exit the program                " << x << endl;
    	cout << "==================================================" << endl << endl;
    }
};


class Airplane{
	public:
		float airplane_w;
		float dis_plane;
		float air_w;
		float dis_planein;
		char go;
		float Air_dis(){
			while(true){
				cout<<"Please enter distance(km.) : ";
				cin>>dis_plane;
				if(dis_plane<=300){
					cout<<"Please enter distance more than 300 km.!"<<endl<<endl;
					cout << "Press any key to enter again..."<< endl;
					go = getch();
					continue;
				}
				else{
					dis_planein = dis_plane;
					return dis_planein;
					break;
				}
			}
		};
		float Air_bag(){
			while(true){
				cout<<"Please enter your baggage allowance(kg.) : ";
				cin>>airplane_w;
				if(airplane_w<0){
					cout<<"Please enter again!"<<endl<<endl;
					cout << "Press any key to enter again..."<< endl;
					go = getch();
					continue;
				}
				else if (airplane_w >100){
					cout<<"Please enter again!"<<endl<<endl;
					cout << "Press any key to enter again..."<< endl;
					go = getch();
					continue;
				}
				else{
					air_w = airplane_w;
					return air_w;
					break;
				}
			}
		};
};

class Airplane_EC : public Airplane {
	public:
		int e_price;
		float baggage= 0;
		int total_ap = 0;
		int ec_bag;
		int showPrice_A(){
			total_ap = 0;
			//Airplane :: Air_dis();
			Airplane :: Air_bag();
			e_price = dis_planein*1.8;
			cout<<endl;
			if(airplane_w<=20){
				cout<<"Airplane First Class price is "<<e_price<<" Baht."<<endl;
				cout<<"The baggage allowance does not exceed the allowance."<<endl;
				total_ap = e_price+baggage;
				cout<<"The total price is "<<total_ap<<" Baht."<<endl<<endl;
				return total_ap;
			}
			else{
				baggage = (airplane_w-20)*55;
				cout<<"Airplane First Class price is "<<e_price<<" Baht."<<endl;
				cout<<"The baggage allowance are exceed the allowance."<<endl;
				cout<<"Price to pay more is "<<baggage<<" Baht."<<endl;
				total_ap = e_price+baggage;
				cout<<"The total price is "<<total_ap<<" Baht."<<endl<<endl;
				return total_ap;
			}
		};
};
class Airplane_BC : public Airplane {
	public:
		int b_price;
		float baggage= 0;
		int total_ap = 0;
		int showPrice_A(){
			total_ap = 0;
			//Airplane :: Air_dis();
			Airplane :: Air_bag();
			cout<<endl;			
			b_price = dis_planein*3.32;
			if(airplane_w<=30){
				cout<<"Airplane First Class price is "<<b_price<<" Baht."<<endl;
				cout<<"The baggage allowance does not exceed the allowance."<<endl;
				total_ap = b_price+baggage;
				cout<<"The total price is "<<total_ap<<" Baht"<<endl<<endl;
				return total_ap;
			}
			else{
				baggage = (airplane_w-30)*55;
				cout<<"Airplane First Class price is "<<b_price<<" Baht."<<endl;
				cout<<"The baggage allowance are exceed the allowance."<<endl;
				cout<<"Price to pay more is "<<baggage<<" Baht."<<endl;
				total_ap = b_price+baggage;
				cout<<"The total price is "<<total_ap<<" Baht."<<endl<<endl;
				return total_ap;
			}
		};
};
class Airplane_FC : public Airplane {
	public:
		int f_price;
		float baggage= 0;
		int total_ap = 0;
		int showPrice_A(){
			total_ap = 0;
			//Airplane :: Air_dis();
			Airplane :: Air_bag();
			f_price = dis_planein*5.12;
			cout<<endl;
			if(airplane_w<=40){
				cout<<"Airplane First Class price is "<<f_price<<" Baht."<<endl;
				cout<<"The baggage allowance does not exceed the allowance."<<endl;
				total_ap = f_price+baggage;
				cout<<"The total price is "<<total_ap<<" Baht."<<endl<<endl;
				return total_ap;
			}
			else{
				baggage = (airplane_w-40)*55;
				cout<<"Airplane First Class price is "<<f_price<<" Baht."<<endl;
				cout<<"The baggage allowance are exceed the allowance."<<endl;
				cout<<"Price to pay more is "<<baggage<<" Baht."<<endl;
				total_ap = f_price+baggage;
				cout<<"The total price is "<<total_ap<<" Baht."<<endl<<endl;
				return total_ap;
			}
		};
};


class Train{
	public:
		int train_inp;
		int train_dt;
		char go;
	public :
	    int tr_udt(){
	        while (true){
                cout << "Enter distance (km.) : ";
                cin >> train_inp;
                if (train_inp <= 10){
                    cout << "Distance must longer than 10!!" << endl;
                    cout << "Press any key to enter again..."<< endl << endl;
                    go = getch();
                    continue;
                }
                else if (train_inp > 457){
                    cout << "Distance must less than 457!!" << endl;
                    cout << "Press any key to enter again..."<< endl;
                    go = getch();
                    continue;
                }
                else if (train_inp <= 457){
                    train_dt = train_inp;
                    return train_dt;
                    break;
                }
	        }

	    }

};
class Train_T3 : public Train{
	private :
		float train_t3p = 1.68;// Bkk-Cm is 457 km. higest price for this type is 271. So 1 km. is 1.68 baht
	public :
		float t3_price;
		int dt_t3;
		Train_T3 (int dt_t3);
		float Show_t3p(){
			cout << "Train Class 3 price is " << t3_price << " Baht"<<endl;
			return t3_price;
		}
};
Train_T3::Train_T3(int dt_t3){
	t3_price = dt_t3*train_t3p;
}

class Train_T2 : public Train {
	private :
		float train_t2p = 2.27;//Bkk-Cm is 457 km. higest price for this type is 1037. So 1 km. is 2.27 baht
	public :
		float t2_price;
		int dt_t2;
		Train_T2 (int dt_t2);
		float Show_t2p(){
			cout << "Train Class 3 price is " << t2_price << " Baht"<<endl;
			return t2_price;
		}
};
Train_T2::Train_T2(int dt_t2){
	t2_price = dt_t2*train_t2p;
}

class Train_T1 : public Train {
	private :
		float train_t1p = 3.61; // Bkk-Cm is 457 km. higest price for this type is 1653. So 1 km. is 3.61 baht
	public :
		float t1_price;
		int dt_t1;
		Train_T1 (int dt_t1);
		float Show_t1p(){
			cout << "Train Class 1 price is " << t1_price << " Baht"<<endl;
			return t1_price;
		}
		
};
Train_T1::Train_T1(int dt_t1){
	t1_price = dt_t1*train_t1p;
}
class Bus{
	public :
		int bus_p;
		int bus_dt;
		char go;
	public :
		float bus_udt(){
			while (true){
				cout << "Enter your distance (km.): ";
				cin >> bus_dt;
				if (bus_dt > 50 && bus_dt <= 2215 ){
					return bus_dt;
					break;
				}
				else if (bus_dt <= 50){
					cout << "Distance must be longer than 50 Kilometers!!!" << endl;
					cout << "Press anykey to enter distance again..." << endl;
					go = getch();
                    continue;
				}
				else if (bus_dt > 2215){
					cout << "Distance must be less than 2215 Kilometers!!!" << endl;
					cout << "Press anykey to enter distance again..." << endl;
					go = getch();
                    continue;
				}
			}
		}
};

class Bus_Vip : public Bus {
	private :
		float bus_vp = 1.39 ;
	public :
		float b_vp;
		int dt_vp;
		Bus_Vip (int dt_vp);
		float Show_vp(){
			cout << "Bus Vip class price is " << b_vp << " Baht" << endl;
			return b_vp;
		}
};
Bus_Vip::Bus_Vip(int dt_vp){
	b_vp = dt_vp*bus_vp;
}
class Bus_Air : public Bus {
	private :
		float bus_ap = 0.81;
	public :
		float b_ap;
		int dt_ap;
		Bus_Air (int dt_ap);
		float Show_ap(){
			cout << "Bus Air class price is " << b_ap << " Baht" << endl;
			return b_ap;
		}
};
Bus_Air::Bus_Air(int dt_ap){
	b_ap = dt_ap*bus_ap;
}
main (){
	float tr_result1,tr_result2,tr_result3,bus_result1,bus_result2;
	float select,select_tr,select_bus,select_ap;
	char gb,ga;
	int sl_trc1,sl_trc2,sl_trc3;
	int bus_count1,bus_count2;
	int ap_count1,ap_count2,ap_count3;
	int yn,i;
	float apc1,apc2,apc3;
	int a1_dt,a2_dt,a3_dt;
	int bag;
	float t1price,t2price,t3price;
	float b_price1,b_price2;
	i = 0;
	Train tr;
	Bus bu;
	Airplane_EC ec;
	Airplane_BC bc;
	Airplane_FC fc;
	welcome pt;
 	loop1:
 	sl_trc1 = 0;
 	sl_trc2 = 0;
 	sl_trc3 = 0;
 	bus_count1 = 0;
	bus_count2 = 0;
	ap_count1 = 0;
	ap_count2 = 0;
	ap_count3 = 0;
 	
 	while(i==0){
	 	if(i==0){
	 		i+=1;
 			break;
		 }
		 else{
			Any:
			cout << "==================================================" << endl;
    		cout << "||\t      Do you want anything else?        ||" << endl;
    		cout << "==================================================" << endl;
    		cout << "||\t      1.Yes                             ||" << endl;
    		cout << "||\t      2.No                              ||" << endl;
    		cout << "==================================================" << endl << endl;
    		cout<<"Enter your answer : ";
    		cin>>yn;
    		if(yn==1){
    			goto addmore;
			}
			else if(yn==2){
				system("cls");
				goto receive;
			}
			else {
				cout << "Wrong selection Please try again!!!"<<endl;
				cout << "Press anykey to try again..."<<endl;
    			gb = getch();
    			goto Any;
			}
		}
	}
	addmore:
 	system("cls");
	while (true){
		pt.Print(1.0);
		pt.Print(2);
		pt.Print("||");
		cout << "Enter your vehicle 1-3: ";
		cin >> select;
		if (select==0){
			Exit:
			system("cls");
			cout << "==================================================" << endl;
			cout << "||\t\t                  \t\t||"<< endl;
			cout << "||\t      - Exited the program -      \t||"<< endl;
			cout << "||\t\t                  \t\t||"<< endl;
			cout << "==================================================" << endl;
			break;
		}
		else if (select==1){
			plane_loop:
			system("cls");
			cout << "==================================================" << endl;
    		cout << "||\t   Please Enter Airplane Class          ||" << endl;
    		cout << "==================================================" << endl;
    		cout << "||\t   Class              Price             ||" << endl;
    		cout << "||\t   1.Economy Class    1.80 THB/Km.      ||" << endl;
    		cout << "||\t   2.Business Class   3.32 THB/Km.      ||" << endl;
    		cout << "||\t   3.First Class      5.12 THB/Km.      ||" << endl;
    		cout << "||\t   0.Back to main menu                  ||" << endl;
    		cout << "==================================================" << endl << endl;
    		cout << "Enter Class : ";
    		cin >> select_ap;
    		if(select_ap==1){
    			ap_count1 = 1;
    			a1_dt = ec.Air_dis();
    			apc1 = ec.showPrice_A();
    			goto Any;
			}
			else if(select_ap==2){
				ap_count2 = 1;
    			a2_dt = bc.Air_dis();
    			apc2 = bc.showPrice_A();
    			goto Any;
			}
			else if(select_ap==3){
				ap_count3 = 1;
    			a3_dt = fc.Air_dis();
    			apc3 = fc.showPrice_A();
    			goto Any;
			}
			else if (select_ap==0){
				goto loop1;
			}
			else {
				cout << "Wrong selection Please try again!!!"<<endl;
				cout << "Press anykey back to plane menu..."<<endl;
    			gb = getch();
    			goto plane_loop;
			}
		}
		else if (select==2){
			train_loop:
			system("cls");
			cout << "==================================================" << endl;
    		cout << "||\t      Please Enter Train Class          ||" << endl;
    		cout << "==================================================" << endl;
    		cout << "||\t      Class         Price               ||" << endl;
    		cout << "||\t      1.Class 1     3.61 THB/Km.        ||" << endl;
    		cout << "||\t      2.Class 2     2.27 THB/Km.        ||" << endl;
    		cout << "||\t      3.Class 3     1.68 THB/Km.        ||" << endl;
    		cout << "||\t      0.Back to main menu               ||" << endl;
    		cout << "==================================================" << endl << endl;
    		cout << "Enter Class: ";
    		cin >> select_tr;
    		if (select_tr==1){
    			sl_trc1=1;
    			tr_result1 = tr.tr_udt();
    			Train_T1 tr1(tr_result1);
    			t1price = tr1.Show_t1p();
    			cout << endl;
    			goto Any;
			}
			else if (select_tr==2){
				sl_trc2=1;
				tr_result2 = tr.tr_udt();
    			Train_T2 tr2(tr_result2);
    			t2price = tr2.Show_t2p();
    			goto Any;
			}
    		else if (select_tr==3){
    			sl_trc3=1;
    			tr_result3 = tr.tr_udt();
    			Train_T3 tr3(tr_result3);
    			t3price = tr3.Show_t3p();
    			goto Any;
			}
			else if (select_tr==0){
				goto loop1;
			}
			else {
				cout << "Wrong selection Please try again!!!"<<endl;
				cout << "Press anykey back to train menu..."<<endl;
    			gb = getch();
    			goto train_loop;
			}
		}
		else if (select==3) {
			bus_loop:
			system("cls");
			cout << "==================================================" << endl;
    		cout << "||\t      Please Enter Bus type             ||" << endl;
    		cout << "==================================================" << endl;
    		cout << "||\t      Type          Price               ||" << endl;
    		cout << "||\t      1.VIP         1.39 THB/Km.        ||" << endl;
    		cout << "||\t      2.Air         0.81 THB/Km.        ||" << endl;
    		cout << "||\t      0.Back to main menu               ||" << endl;
    		cout << "==================================================" << endl << endl;
    		cout << "Enter Bus type: ";
    		cin >> select_bus;
    		if (select_bus==0){
    			goto loop1;
			}
			else if (select_bus==1){
				bus_count1 = 1;
				bus_result1 = bu.bus_udt();
				Bus_Vip bvp(bus_result1);
				b_price1 = bvp.Show_vp();
				goto Any;
			}
			else if (select_bus==2){
				bus_count2 = 1;
				bus_result2 = bu.bus_udt();
				Bus_Air bap(bus_result2);
				b_price2 = bap.Show_ap();
				goto Any;
			}
			else {
				cout << "Wrong selection Please try again!!!"<<endl;
				cout << "Press anykey back to bus menu..."<<endl;
    			gb = getch();
    			goto bus_loop;
			}
		}
		else {
			cout << "Wrong selection please try again!!!" << endl;
			cout << "Press anykey back to main menu..."<<endl;
			gb = getch();
			system("cls");
    		goto loop1;
		}
	receive:
	cout << "==================================================" << endl;
    cout << "||\t\t     Result                     ||" << endl;
    cout << "==================================================" << endl;
    if (ap_count1==1 && ap_count2==1 && ap_count3==1 && sl_trc1==1 && sl_trc2==1 && sl_trc3==1 && bus_count1==1 && bus_count2==1){
    		cout << "||\t\t     Airplane                   ||" << endl;
    		cout << "||\t                                        ||" << endl;
    		cout << "||\t      Economy class                     ||" << endl;
    		cout << "||\t      -Distance    = " << a1_dt << "\t\t||" << endl;
    		cout << "||\t      -Total Price = " << apc1 << "\t\t||" << endl;
    		cout << "||\t                                        ||" << endl;
    		cout << "||\t      Bussiness class                   ||" << endl;
			cout << "||\t      -Distance    = " << a2_dt << "\t\t||" << endl;
    		cout << "||\t      -Total Price = " << apc2 << "\t\t||" << endl;
    		cout << "||\t                                        ||" << endl;
    		cout << "||\t      First class                       ||" << endl;
			cout << "||\t      -Distance    = " << a3_dt << "\t\t||" << endl;
    		cout << "||\t      -Total Price = " << apc3 << "\t\t||" << endl;
    		cout << "||\t                                        ||" << endl;
    		cout << "||\t\t     Train                      ||" << endl;
    		cout << "||\t                                        ||" << endl;        
    		cout << "||\t      Class 1                           ||" << endl;
    		cout << "||\t      -Distance    = " << tr_result1 << "\t\t||" << endl;
    		cout << "||\t      -Total Price = " << t1price << "\t\t||" << endl;
    		cout << "||\t                                        ||" << endl;
    		cout << "||\t      Class 2                           ||" << endl;
    		cout << "||\t      -Distance    = " << tr_result2 << "\t\t||" << endl;
    		cout << "||\t      -Total Price = " << t2price << "\t\t||" << endl;
    		cout << "||\t                                        ||" << endl;
    		cout << "||\t      Class 3                           ||" << endl;
    		cout << "||\t      -Distance    = " << tr_result3 << "\t\t||" << endl;
    		cout << "||\t      -Total Price = " << t3price << "\t\t||" << endl;
    		cout << "||\t                                        ||" << endl;
    		cout << "||\t\t     Bus                        ||" << endl;
    		cout << "||\t                                        ||" << endl;        
    		cout << "||\t      Vip                               ||" << endl;
    		cout << "||\t      -Distance    = " << bus_result1 << "\t\t||" << endl;
    		cout << "||\t      -Total Price = " << b_price1 << "\t\t||" << endl;
    		cout << "||\t                                        ||" << endl;
    		cout << "||\t      Class 2                           ||" << endl;
    		cout << "||\t      -Distance    = " << bus_result2 << "\t\t||" << endl;
    		cout << "||\t      -Total Price = " << b_price2 << "\t\t||" << endl;
    		cout << "||\t                                        ||" << endl;
	}
	else if (ap_count1==1 && ap_count2==1 && ap_count3==1){
			cout << "||\t\t     Airplane                   ||" << endl;
    		cout << "||\t                                        ||" << endl;
    		cout << "||\t      Economy class                     ||" << endl;
    		cout << "||\t      -Distance    = " << a1_dt << "\t\t||" << endl;
    		cout << "||\t      -Total Price = " << apc1 << "\t\t||" << endl;
    		cout << "||\t                                        ||" << endl;
    		cout << "||\t      Bussiness class                   ||" << endl;
			cout << "||\t      -Distance    = " << a2_dt << "\t\t||" << endl;
    		cout << "||\t      -Total Price = " << apc2 << "\t\t||" << endl;
    		cout << "||\t                                        ||" << endl;
    		cout << "||\t      First class                       ||" << endl;
			cout << "||\t      -Distance    = " << a3_dt << "\t\t||" << endl;
    		cout << "||\t      -Total Price = " << apc3 << "\t\t||" << endl;
    		cout << "||\t                                        ||" << endl;
    	}
	else if (ap_count1==1 || ap_count2==1 || ap_count3==1){
    	cout << "||\t\t     Airplane                   ||" << endl;
    	cout << "||\t                                        ||" << endl;        
    	if (ap_count1==1){
    		cout << "||\t      Economy class                     ||" << endl;
    		cout << "||\t      -Distance    = " << a1_dt << "\t\t||" << endl;
    		cout << "||\t      -Total Price = " << apc1 << "\t\t||" << endl;
    		cout << "||\t                                        ||" << endl;
		}
		else if (ap_count2==1){
			cout << "||\t      Bussiness class                   ||" << endl;
			cout << "||\t      -Distance    = " << a2_dt << "\t\t||" << endl;
    		cout << "||\t      -Total Price = " << apc2 << "\t\t||" << endl;
    		cout << "||\t                                        ||" << endl;
		}
		else if (ap_count3==1){
			cout << "||\t      First class                       ||" << endl;
			cout << "||\t      -Distance    = " << a3_dt << "\t\t||" << endl;
    		cout << "||\t      -Total Price = " << apc3 << "\t\t||" << endl;
    		cout << "||\t                                        ||" << endl;
		}
	}
	else if (sl_trc1==1 && sl_trc2==1 && sl_trc3==1){
		cout << "||\t                                        ||" << endl;
    	cout << "||\t\t     Train                      ||" << endl;
    	cout << "||\t                                        ||" << endl;        
    	cout << "||\t      Class 1                           ||" << endl;
    	cout << "||\t      -Distance    = " << tr_result1 << "\t\t||" << endl;
    	cout << "||\t      -Total Price = " << t1price << "\t\t||" << endl;
    	cout << "||\t      Class 2                           ||" << endl;
    	cout << "||\t      -Distance    = " << tr_result2 << "\t\t||" << endl;
    	cout << "||\t      -Total Price = " << t2price << "\t\t||" << endl;
    	cout << "||\t      Class 3                           ||" << endl;
    	cout << "||\t      -Distance    = " << tr_result3 << "\t\t||" << endl;
    	cout << "||\t      -Total Price = " << t3price << "\t\t||" << endl;
    	cout << "||\t                                        ||" << endl;
	}
	else if (sl_trc1==1 || sl_trc2==1 || sl_trc3==1){
		cout << "||\t                                        ||" << endl;
    	cout << "||\t\t     Train                      ||" << endl;
    	cout << "||\t                                        ||" << endl;        
    	if (sl_trc1==1){
    		cout << "||\t      Class 1                           ||" << endl;
    		cout << "||\t      -Distance    = " << tr_result1 << "\t\t\t||" << endl;
    		cout << "||\t      -Total Price = " << t1price << "\t\t||" << endl;
    		cout << "||\t                                        ||" << endl;
		}
		else if (sl_trc2==1){
			cout << "||\t      Class 2                           ||" << endl;
    		cout << "||\t      -Distance    = " << tr_result2 << "\t\t\t||" << endl;
    		cout << "||\t      -Total Price = " << t2price << "\t\t||" << endl;
    		cout << "||\t                                        ||" << endl;
		}
		else if (sl_trc3==1){
			cout << "||\t      Class 3                           ||" << endl;
    		cout << "||\t      -Distance    = " << tr_result3 << "\t\t\t||" << endl;
    		cout << "||\t      -Total Price = " << t3price << "\t\t||" << endl;
    		cout << "||\t                                        ||" << endl;
		}
	}
    
    else if (bus_count1==1 && bus_count2==1){
		cout << "||\t                                        ||" << endl;
    	cout << "||\t\t     Bus                        ||" << endl;
    	cout << "||\t                                        ||" << endl;        
    	cout << "||\t      Vip                               ||" << endl;
    	cout << "||\t      -Distance    = " << bus_result1 << "\t\t||" << endl;
    	cout << "||\t      -Total Price = " << b_price1 << "\t\t||" << endl;
    	cout << "||\t      Class 2                           ||" << endl;
    	cout << "||\t      -Distance    = " << bus_result2 << "\t\t||" << endl;
    	cout << "||\t      -Total Price = " << b_price2 << "\t\t||" << endl;
	}
	else if (bus_count1==1 || bus_count2==1){
		cout << "||\t                                        ||" << endl;
    	cout << "||\t\t     Bus                        ||" << endl;
    	cout << "||\t                                        ||" << endl;        
    	if (bus_count1==1){
    		cout << "||\t      Vip                               ||" << endl;
    		cout << "||\t      -Distance    = " << bus_result1 << "\t\t\t||" << endl;
    		cout << "||\t      -Total Price = " << b_price1 << "\t\t||" << endl;
    		cout << "||\t                                        ||" << endl;
		}
		else if (bus_count2==1){
			cout << "||\t      Bus                               ||" << endl;
    		cout << "||\t      -Distance    = " << bus_result2 << "\t\t\t||" << endl;
    		cout << "||\t      -Total Price = " << b_price2 << "\t\t||" << endl;
    		cout << "||\t                                        ||" << endl;
		}
	}
    cout << "==================================================" << endl;
    cout << "Press anykey back to main menu..."<<endl;
    // save result to file
    ofstream myfile;
    myfile.open ("summary.txt",ios::app);
    myfile << "==================================================" << endl;
    myfile << "\t\t     Result                          " << endl;
    myfile << "==================================================" << endl;
    if (myfile.is_open()){
	
		if (ap_count1==1 && ap_count2==1 && ap_count3==1 && sl_trc1==1 && sl_trc2==1 && sl_trc3==1 && bus_count1==1 && bus_count2==1){
    		myfile << "\t\t     Airplane                        " << endl;
    		myfile << "\t                                        " << endl;
    		myfile << "\t      Economy class                     " << endl;
    		myfile << "\t      -Distance    = " << a1_dt << "                " << endl;
    		myfile << "\t      -Total Price = " << apc1 << "                " << endl;
    		myfile << "\t                                        " << endl;
    		myfile << "\t      Bussiness class                   " << endl;
			myfile << "\t      -Distance    = " << a2_dt << "                " << endl;
    		myfile << "\t      -Total Price = " << apc2 << "                " << endl;
    		myfile << "\t                                        " << endl;
    		myfile << "\t      First class                       " << endl;
			myfile << "\t      -Distance    = " << a3_dt << "                " << endl;
    		myfile << "\t      -Total Price = " << apc3 << "                " << endl;
    		myfile << "\t                                        " << endl;
    		myfile << "\t\t     Train                           " << endl;
    		myfile << "\t                                        " << endl;        
    		myfile << "\t      Class 1                           " << endl;
    		myfile << "\t      -Distance    = " << tr_result1 << "                " << endl;
    		myfile << "\t      -Total Price = " << t1price << "                " << endl;
    		myfile << "\t                                        " << endl;
    		myfile << "\t      Class 2                           " << endl;
    		myfile << "\t      -Distance    = " << tr_result2 << "                " << endl;
    		myfile << "\t      -Total Price = " << t2price << "                " << endl;
    		myfile << "\t                                        " << endl;
    		myfile << "\t      Class 3                           " << endl;
    		myfile << "\t      -Distance    = " << tr_result3 << "                " << endl;
    		myfile << "\t      -Total Price = " << t3price << "                " << endl;
    		myfile << "\t                                        " << endl;
    		myfile << "\t\t     Bus                             " << endl;
    		myfile << "\t                                        " << endl;        
    		myfile << "\t      Vip                               " << endl;
    		myfile << "\t      -Distance    = " << bus_result1 << "                " << endl;
    		myfile << "\t      -Total Price = " << b_price1 << "                " << endl;
    		myfile << "\t                                        " << endl;
    		myfile << "\t      Class 2                           " << endl;
    		myfile << "\t      -Distance    = " << bus_result2 << "                " << endl;
    		myfile << "\t      -Total Price = " << b_price2 << "                " << endl;
    		myfile << "\t                                        " << endl;
	}
		else if (ap_count1==1 && ap_count2==1 && ap_count3==1){
			myfile << "\t\t     Airplane                        " << endl;
    		myfile << "\t                                        " << endl;
    		myfile << "\t      Economy class                     " << endl;
    		myfile << "\t      -Distance    = " << a1_dt << "                " << endl;
    		myfile << "\t      -Total Price = " << apc1 << "                " << endl;
    		myfile << "\t                                        " << endl;
    		myfile << "\t      Bussiness class                   " << endl;
			myfile << "\t      -Distance    = " << a2_dt << "                " << endl;
    		myfile << "\t      -Total Price = " << apc2 << "                " << endl;
    		myfile << "\t                                        " << endl;
    		myfile << "\t      First class                       " << endl;
			myfile << "\t      -Distance    = " << a3_dt << "                " << endl;
    		myfile << "\t      -Total Price = " << apc3 << "                " << endl;
    		myfile << "\t                                        " << endl;
    	}
		else if (ap_count1==1 || ap_count2==1 || ap_count3==1){
    		myfile << "\t\t     Airplane                        " << endl;
    		myfile << "\t                                        " << endl;        
    		if (ap_count1==1){
    			myfile << "\t      Economy class                     " << endl;
    			myfile << "\t      -Distance    = " << a1_dt << "                " << endl;
    			myfile << "\t      -Total Price = " << apc1 << "                " << endl;
    			myfile << "\t                                        " << endl;
		}
			else if (ap_count2==1){
				myfile << "\t      Bussiness class                   " << endl;
				myfile << "\t      -Distance    = " << a2_dt << "                " << endl;
    			myfile << "\t      -Total Price = " << apc2 << "                " << endl;
    			myfile << "\t                                        " << endl;
		}
			else if (ap_count3==1){
				myfile << "\t      First class                       " << endl;
				myfile << "\t      -Distance    = " << a3_dt << "                " << endl;
    			myfile << "\t      -Total Price = " << apc3 << "                " << endl;
    			myfile << "\t                                        " << endl;
		}
	}
		else if (sl_trc1==1 && sl_trc2==1 && sl_trc3==1){
			myfile << "\t                                        " << endl;
    		myfile << "\t\t     Train                           " << endl;
    		myfile << "\t                                        " << endl;        
    		myfile << "\t      Class 1                           " << endl;
    		myfile << "\t      -Distance    = " << tr_result1 << "                " << endl;
    		myfile << "\t      -Total Price = " << t1price << "                " << endl;
    		myfile << "\t      Class 2                           " << endl;
    		myfile << "\t      -Distance    = " << tr_result2 << "                " << endl;
    		myfile << "\t      -Total Price = " << t2price << "                " << endl;
    		myfile << "\t      Class 3                           " << endl;
    		myfile << "\t      -Distance    = " << tr_result3 << "                " << endl;
    		myfile << "\t      -Total Price = " << t3price << "                " << endl;
    		myfile << "\t                                        " << endl;
		}
		else if (sl_trc1==1 || sl_trc2==1 || sl_trc3==1){
			myfile << "\t                                        " << endl;
    		myfile << "\t\t     Train                           " << endl;
    		myfile << "\t                                        " << endl;        
    		if (sl_trc1==1){
    			myfile << "\t      Class 1                           " << endl;
    			myfile << "\t      -Distance    = " << tr_result1 << "                " << endl;
    			myfile << "\t      -Total Price = " << t1price << "                " << endl;
    			myfile << "\t                                        " << endl;
			}
			else if (sl_trc2==1){
				myfile << "\t      Class 2                           " << endl;
    			myfile << "\t      -Distance    = " << tr_result2 << "                " << endl;
    			myfile << "\t      -Total Price = " << t2price << "                " << endl;
    			myfile << "\t                                        " << endl;
			}
			else if (sl_trc3==1){
				myfile << "\t      Class 3                           " << endl;
    			myfile << "\t      -Distance    = " << tr_result3 << "                " << endl;
    			myfile << "\t      -Total Price = " << t3price << "                " << endl;
    			myfile << "\t                                        " << endl;
			}
		}
    
    	else if (bus_count1==1 && bus_count2==1){
			myfile << "\t                                        " << endl;
    		myfile << "\t\t     Bus                             " << endl;
    		myfile << "\t                                        " << endl;        
    		myfile << "\t      Vip                               " << endl;
    		myfile << "\t      -Distance    = " << bus_result1 << "                " << endl;
    		myfile << "\t      -Total Price = " << b_price1 << "                " << endl;
    		myfile << "\t      Class 2                           " << endl;
    		myfile << "\t      -Distance    = " << bus_result2 << "                " << endl;
    		myfile << "\t      -Total Price = " << b_price2 << "                " << endl;
		}
		else if (bus_count1==1 || bus_count2==1){
			myfile << "\t                                        " << endl;
    		myfile << "\t\t     Bus                             " << endl;
    		myfile << "\t                                        " << endl;        
    		if (bus_count1==1){
    			myfile << "\t      Vip                               " << endl;
    			myfile << "\t      -Distance    = " << bus_result1 << "                " << endl;
    			myfile << "\t      -Total Price = " << b_price1 << "                " << endl;
    			myfile << "\t                                        " << endl;
			}
			else if (bus_count2==1){
				myfile << "\t      Bus                               " << endl;
    			myfile << "\t      -Distance    = " << bus_result2 << "                " << endl;
    			myfile << "\t      -Total Price = " << b_price2 << "                 " << endl;
    			myfile << "\t                                        " << endl;
			}
		}
    myfile << "==================================================" << endl;
    myfile << "\t                                        " << endl;
	myfile.close();
}
    gb = getch();
    goto loop1;
	}

}