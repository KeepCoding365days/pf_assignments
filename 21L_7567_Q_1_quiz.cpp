#include <iostream>
using namespace std;
int main() {
	int date, month ,check,quit= 0;
	do {
		cout << "Please enter your Birthday to check horoscope sign." << endl;
		cout << "Please enter month number:";
		cin >> month;
		cout << "Please enter date:";
		cin >> date;
		if (month >= 12 || month <= 0 || date <= 0 || date > 31) {
			cout << "Invalid Input.";
		}
		else {
			if ((date >= 21 && month == 3) || (date <= 19 && month == 4)) {
				cout << "Your horoscope sign is Aries." << endl;

			}
			else if ((date >= 20 && month == 4) || (date <= 20 && month == 5)) {
				cout << "Your horoscope sign is Taurus." << endl;

			}
			else if ((date >= 21 && month == 5) || (date <= 21 && month == 6)) {
				cout << "Your horoscope sign is Gemini." << endl;

			}
			else if ((date >= 22 && month == 6) || (date <= 22 && month == 7)) {
				cout << "Your horoscope sign is Cancer." << endl;

			}
			else if ((date >= 23 && month == 7) || (date <= 22 && month == 8)) {
				cout << "Your horoscope sign is Leo." << endl;

			}
			else if ((date >= 23 && month == 8) || (date <= 22 && month == 9)) {
				cout << "Your horoscope sign is Virgo." << endl;

			}
			else if(( date >= 23 && month == 9) || (date <= 22 && month == 10)) {
			cout << "Your horoscope sign is Libra." << endl;

		}
		else if ((date >= 23 && month == 10) || (date <= 21 && month == 11)) {
		cout << "Your horoscope sign is Scorpio." << endl;

		}
		else if ((date >= 22 && month == 11) || (date <= 21 && month == 12)) {
		cout << "Your horoscope sign is Sagittarius." << endl;

		}
		else if ((date >= 22 && month == 12) || (date <= 19 && month == 1)) {
		cout << "Your horoscope sign is Capricorn." << endl;

		}
		else if ((date >= 20 && month == 1) || (date <= 18 && month == 2)) {
		cout << "Your horoscope sign is Aquarius." << endl;
			}

		else if ((date >= 19 && month == 2) || (date <= 20 && month == 3)) {
		cout << "Your horoscope sign is Pisces." << endl;

		}
		//for cusps
		if (((date >= 19 && date < 21) && month == 3) || ((date <= 21 && date > 19) && month == 4)) {
			cout << "Your Birthday is on a cusp. With second horoscope sign Aries." << endl;
		}
		else if (((date >= 18 && date < 20) && month == 4) || ((date <= 22 && date > 20) && month == 5)) {
			cout << "Your Birthday is on a cusp. With second horoscope sign Taurus." << endl;
		}
		else if (((date >= 19 && date < 21) && month == 5) || ((date < 21 && date >= 19) && month == 6)) {
			cout << "Your Birthday is on a cusp. With second horoscope sign Gemini." << endl;
		}
		else if (((date >= 20 && date < 22) && month == 6) || ((date <= 24 && date > 22) && month == 7)) {
			cout << "Your Birthday is on a cusp. With second horoscope sign Cancer." << endl;
		}
		else if (((date >= 21 && date < 23) && month == 7) || ((date <= 24 && date > 22) && month == 8)) {
			cout << "Your Birthday is on a cusp. With second horoscope sign Leo." << endl;
		}
		else if (((date >= 21 && date < 23) && month == 8) || ((date <= 24 && date > 22) && month == 9)) {
			cout << "Your Birthday is on a cusp. With second horoscope sign Virgo." << endl;
		}
		else if (((date >= 21 && date < 23) && month == 9) || ((date <= 24 && date > 22) && month == 10)) {
			cout << "Your Birthday is on a cusp. With second horoscope sign Libra." << endl;
		}
		else if (((date >= 21 && date < 23) && month == 10) || ((date <= 23 && date > 21) && month == 11)) {
			cout << "Your Birthday is on a cusp. With second horoscope sign Scorpio." << endl;
		}
		else if (((date >= 20 && date < 22) && month == 11) || ((date <= 23 && date > 21) && month == 12)) {
			cout << "Your Birthday is on a cusp. With second horoscope sign Sagittarius." << endl;
		}
		else if (((date >= 20 && date < 22) && month == 12) || ((date <= 21 && date > 19) && month == 1)) {
			cout << "Your Birthday is on a cusp. With second horoscope sign Capricorn." << endl;
		}
		else if (((date >= 18 && date < 20) && month == 1) || ((date <= 20 && date > 18) && month == 2)) {
			cout << "Your Birthday is on a cusp. With second horoscope sign Aquarius." << endl;
		}
		else if (((date >= 17 && date < 19) && month == 2) || ((date <= 22 && date > 20) && month == 3)) {
			cout << "Your Birthday is on a cusp. With second horoscope sign Pisces." << endl;
		}
		}
		




		cout << "Please enter -1 to quit or any other number to continue:";
		cin >> quit;

	} while (quit != -1);
	system("pause");
	return 0;
}