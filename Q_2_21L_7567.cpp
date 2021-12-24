#include <iostream>         //solution of Q2 of assignment 1
using namespace std;

int main(){
    int num_1,num_2=0;

    cout<<"Enter 2 numbers to check if they are multiples of each other \n";

    cout<<"Enter first number: ";
    cin>>num_1;

    cout<<"Enter second number: ";
    cin>>num_2;

    //nested if statements are used so program can work properly even 
    //if user enters larger number after small number 

    if (num_1>num_2){
        if (num_1%num_2==0){
            cout<< num_1 <<" is multiple of "<<num_2<< "."<<endl;
            }
        else {
            cout<<"NON";
            }
        }
        
        
    else if (num_1<=num_2){
        if (num_2%num_1==0){
            cout<< num_2 <<" is multiple of "<<num_1<< "."<<endl;
            }
        else {
            cout<<"NON";
            }
        }    
        
    return 0;
} 