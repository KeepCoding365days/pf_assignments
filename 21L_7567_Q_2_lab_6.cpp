#include<iostream>
using namespace std;
double getLength();
double getWidth();
double getArea(double,double);
int displayData(double, double, double);
int main() {
	double length, area, width;
	length=getLength();
	
	width=getWidth();
	
	area=getArea(length, width);
	

	displayData(length, width, area);
	system("pause");
	return 0;
}
double getLength() {
	double length;
	cout << "Please enter length of rectangle:";
	cin >> length;
	return length;
}
double getWidth() {
	double width;
	cout << "Please enter width of rectangle:";
	cin >> width;
	return width;
}
double getArea(double length, double width) {
	double area=0.0;
	area = length * width;
	return area;
}
int displayData(double length, double width, double area) {
	cout << "The area of ractangle with lenght of " << length << " and width of " << width << " is " << area <<endl ;
	return 0;
}