#include<iostream>
using namespace std;
double kineticEnergycalc(double, double);
int main() {
	double mass, velocity, kinetic_energy = 0.0;
	cout << "Please enter mass and velocity to calculate kinetic energy."<<endl;
	cout << "Please enter mass in kilograms:";
	cin >> mass;
	cout << "Please enter velocity in metre per second:";
	cin >> velocity;

	kinetic_energy = kineticEnergycalc(mass, velocity);

	cout << "Kinetic energy is " << kinetic_energy << " Newtons." << endl;

	system("pause");
	return 0;

}
double kineticEnergycalc(double mass, double velocity) { //func to calculate K.E
	double kinetic_energy = 0.0;
	kinetic_energy = 0.5 * mass * (velocity * velocity);
	return kinetic_energy;
}