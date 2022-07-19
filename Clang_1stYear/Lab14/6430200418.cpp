#include <iostream>
#include <iomanip>
using namespace std;

class Shape{
	private:
		string color;
	public:
		double getArea(){
			double radius;
			cout<<"Enter your area: ";
			cin >> radius;
			return(3.14*radius*radius);
		};
		string toString(){
			cout << "Input your color: ";
			cin >> color;
			return (color);
		};
};
class Rectangle : public Shape{
	private:
		string color;
	public:
		int length,width;
	public:
		double getArea(){
			double radius;
			cout<<"Enter length: ";
			cin >> length;
			cout<<"Enter width: ";
			cin >> width;
			return(length * width);
		};
		string toString(){
			cout << "Input your color: ";
			cin >> color;
			return (color);
		};
};
class Triangle : public Shape{
	private:
		string color;
	public:
		int length,width;
	public:
		double getArea(){
			double radius;
			cout<<"Enter length: ";
			cin >> length;
			cout<<"Enter width: ";
			cin >> width;
			return(length * width/2);
		};
		string toString(){
			cout << "Input your color: ";
			cin >> color;
			return (color);
		};
};
int main(){
	Shape shape1;
	Rectangle shape2 = Rectangle();
	Triangle shape3 = Triangle();
	
	double area;
	string color;
	area = shape1.getArea();
	color = shape1.toString();
	cout << "Area of shape1 = " << area << " Color is " << color << endl;
	area = shape2.getArea();
	color = shape2.toString();
	cout << "Area of shape2 = " << area << " Color is " << color << endl;
	area = shape3.getArea();
	color = shape3.toString();
	cout << "Area of shape3 = " << area << " Color is " << color << endl;
	return 0;
}

