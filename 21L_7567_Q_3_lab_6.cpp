#include <iostream>
using namespace std;
double fallingDistance(double);
int main() {
	double time ,distance=0.0;
	for (time = 1;time <= 10;time++) {
		distance = fallingDistance(time);
		cout << "The distance covered in " << time << " second is " << distance << " metres." << endl;
	}
	system("pause");
	return 0;
}
double fallingDistance(double time = 0.0) {
	double distance = 0.0;
	distance = 0.5 * 9.8 * (time * time);
	return distance;
}
