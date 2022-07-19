#include <iostream>
#include <iomanip>
using namespace std;
class Room
{
	public:
    	float arg1, arg2, arg3, sarg1, sarg2, sarg3, total;
    	Room();
		Room(float arg1,float arg2,float arg3);
		Room(float arg1,float arg2);
        void Room_total(float arg1, float arg2, float arg3) 
		{
			cout << fixed << setprecision(3);
            total = arg1 + arg2 + arg3;
            cout << "Total = "<< total << endl;
		};
	
};

Room::Room(float arg1,float arg2)
{
	sarg1 = arg1;
    sarg2 = arg2;
}

Room::Room(float arg1,float arg2,float arg3)
{
    sarg1 = arg1;
    sarg2 = arg2;
    sarg3 = arg3;
}

main( ) {
    /*Room room1(20,30,40);
    Room room2(40,50);
    room1.Room_total();
    room2.Room_total();*/

	while (true)
	{
		Room room1 = Room();
		int arg1;
		int arg2;
		int arg3;
        cout << "Enter electric :";
        cin >> arg1;
        room1.arg1 = arg1;
        cout << "Enter water : ";
        cin >> arg2;
        room1.arg2 = arg2;
        cout << "Enter service charge : ";
        cin >> arg3;
        room1.arg3 = arg3;
        if (arg1==0)
		{
            room1.Room_total(room1.arg1, room1.arg2, room1.arg3);
        }
        else if (arg2==0)
		{
            Room room2 = Room(room1.arg1, room1.arg2, room1.arg3);
            room2.Room_total(room2.arg1, room2.arg2, room2.arg3);
        }
        else if (arg3==0)
		{
            room1.Room_total(room1.arg1, room1.arg2, room1.arg3);
        }
	}
}