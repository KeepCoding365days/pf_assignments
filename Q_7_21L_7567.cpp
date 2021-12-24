#include <iostream>     //solution for Q7 of Assignment 1
using namespace std;
int main(){
    int a,b;

    cout<<"Please enter 2 numbers: \n";
    
    cout<<"Enter value of a: ";
    cin>>a;
    
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"\n";
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    cout<<"After swapping. \n";
    
    cout<<"Value of a is: "<<a<<".\n";
    cout<<"Value of b is: "<<b<<".";
    
    getchar();


    return 0;
}