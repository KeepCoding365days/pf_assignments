#include <iostream> //solution of Q6 of first assignment
using namespace std;
int main(){ //calculate bmi
    float mass, height,bmi=0.0;

    cout<<"Enter your mass in kg: ";
    cin>>mass;

    cout<<"Enter your height in metres: ";
    cin>>height;

    bmi=mass/(height*height); //formula to calculate bmi is:mass/height^2
    
    cout<<"Your bmi is: "<<bmi;


    return 0;
}