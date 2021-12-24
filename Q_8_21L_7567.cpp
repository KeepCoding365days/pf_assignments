#include <iostream>  //solution of Q8 of Assignment1
using namespace std;
int main(){
    int a,b,c=0;
    
    cout<<"Please enter 3 numbers to check if they are Pythagorean triple or not.\n";

    cout<<"Enter first number: ";
    cin>>a;
    
    cout<<"Enter second number: ";
    cin>>b;

    cout<<"Enter third number: ";
    cin>>c;

    a=a*a;      //taking squares
    b=b*b;
    c=c*c;

    //checcking for Pythagorean numbers
    
    if (a>b && a>c){
        if (a==b+c){
            cout<<"Given numbers are Pythagorean triples.";
        }
        else{
            cout<<"Given numbers are not Pythagorean triples";
        }
    }
    
    else if (b>a && b>c){
            if (b==a+c){
                cout<<"Given numbers are Pythagorean triples.";
            }
            else{
                cout<<"Given numbers are not Pythagorean triples";
            }
    }
    
    else if (c>a && c>b){
            if (c==a+b){
                cout<<"Given numbers are Pythagorean triples.";
            }
            else{
                cout<<"Given numbers are not Pythagorean triples";
        }
    }

    else if (a==0 && b==0 && c==0){
        cout<<"Given numbers are Pythagorean triples";
    }
    
    else{
        cout<<"Given numbers are not Pythagorean triples";
    }

    return 0;
} 