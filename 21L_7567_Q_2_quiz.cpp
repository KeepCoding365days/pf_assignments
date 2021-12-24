#include <iostream>
using namespace std;
int main() {
	int celcius=100, fahr=0;
	for (celcius = 100;fahr != celcius;celcius--) {

		fahr = ((9 * celcius) / 5) + 32;			/*the formula mentioned in quiz was wrong.there is 32 instead of
												325*/
	}
		cout << "At "<<celcius<<" degree, Celcius and fahrenheit has same values."<<endl;
		system("pause");
		return 0;
	}