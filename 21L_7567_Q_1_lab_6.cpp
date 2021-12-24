#include <iostream>
using namespace std;
double caculateRetail(double, double);
int main() {
	double whole_sale, markup,retail = 0.0;
	cout << "Please enter whole sale price:";
	cin >> whole_sale;
	cout<< "Please enter markup percentage:";
	cin >> markup;
	retail = caculateRetail(whole_sale, markup);
	cout << "Retail price is " << retail << "."<<endl;
	system("pause");
	return 0;
}

double caculateRetail(double whole_sale, double markup) {
	double retail;
	if (whole_sale < 0 || markup < 0 || markup>100) {
		cout << "Invalid Input";
	}
	else {
		retail = whole_sale;
		retail += whole_sale * (markup / 100);
	}
	return retail;
}