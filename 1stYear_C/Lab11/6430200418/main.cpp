

/*
#include <iostream>
#include <string.h>
using namespace std;
class Money {
        public:
                        float THB;
                        float result;
                        void showUS(void) {
                                        //cout <<"1 USD: 32.8774 THB "<<endl;
                                        result = THB/32.8774;
                                        cout << THB <<" Baht: "<<result<<" Dollar."<<endl;
                               };
                        void showYen(void){
                                        result = THB*3.58;
                                        cout << THB <<" Baht: "<<result<<" Yen"<<endl;
                        };
};
main( ) {
    Money Baht;
    std::cout<< "Enter Baht: ";
    std::cin >> Baht.THB;
    //Baht.result = Baht.THB/32.8774;
    Baht.showUS();
    Baht.showYen();
}

#include <iostream>
using namespace std;
class score{
    public:
                float mid;
                float fin;
                float Project;
                float Quiz;
                float result;
                void showscore(void){
                    result = mid + fin + Project + Quiz;
                    cout <<"Mid test = "<<mid<<" Final test = "<<fin<<" Project = "<<Project<<" Quiz = "<<Quiz<<endl;
                    cout <<"Summary is "<<result<<endl;
                };
                void grade(void){
                    result = mid + fin + Project + Quiz;
                    if (result>=80){
                        cout << "Grade : A."<<endl;
                    }
                    else if (result>=75 && result <=79){
                        cout << "Grade : B+."<<endl;
                    }
                    else if (result>=70 && result <=74){
                        cout << "Grade : B."<<endl;
                    }
                    else if (result>=65 && result <=69){
                        cout << "Grade : C+."<<endl;
                    }
                    else if (result>=60 && result <=64){
                        cout << "Grade : C."<<endl;
                    }
                    else if (result>=55 && result <=59){
                        cout << "Grade : D+."<<endl;
                    }
                    else if (result>=50 && result <=54){
                        cout << "Grade : D."<<endl;
                    }
                    else if (result<50){
                        cout << "Grade : F."<<endl;
                    }
                }
};
main(){
    score stu1;
    while (true){
    mid1:
    cout << "Enter Mid test score: ";
    cin >> stu1.mid;
    if (stu1.mid > 30){
        cout << "Max score of mid test is 30" <<endl;
        goto mid1;
    }
    fin1:
    cout << "Enter Final score: ";
    cin >> stu1.fin;
    if (stu1.fin > 30){
        cout << "Max score of Final test is 30" <<endl;
        goto fin1;
    }
    Pro1:
    cout <<"Enter Project score: ";
    cin >> stu1.Project;
    if (stu1.Project > 30){
        cout << "Max score of Project test is 30" <<endl;
        goto Pro1;
    }
    Quiz1:
    cout <<"Enter Quiz score: ";
    cin >> stu1.Quiz;
    if (stu1.Quiz > 10){
        cout << "Max score of Quiz test is 10" <<endl;
        goto Quiz1;
    }
    stu1.showscore();
    stu1.grade();
    }
}
*/
#include <iostream>
using namespace std;
class Circle {
public:
	int radius;
public:
	void setRadius (int val) { radius = val;};
	float area (void) { return 3.14*radius*radius; };
	float girth (void) { return 3.14*2*radius; };
};
main ()
{
	Circle cir1;
	int val,n_val;
	cout << "Enter circle radius: ";
	cin >> val;
	cir1.setRadius(val);
	n_val = cir1.radius;
	cout << "radius " << n_val << endl;
	cout << "Area " << cir1.area() << endl;
	cout << "Girth " << cir1.girth() << endl;
}
