#include <iostream> //solution of first question of PF assignment#1
using namespace std;

int main(){
    int input, input_1, input_2,input_3, input_4, input_5, input_6,sum=0;
    
    cout<<"Enter a 6 digit number: ";
    cin>> input;        //suppose 345672
    cout<< endl;
    if (input/1000000!=0 || input/100000==0){    //check for valid input
        cout<<"Please enter a six digit number."<<endl;
    }
    else {
        input_1= input%10;   //2
    
        input_2= input/10;
        input_2= input_2%10;  //7

        input_3= input/100;
        input_3= input_3%10;   //6

        input_4= input/1000;
        input_4= input_4%10;    //5

        input_5= input/10000;
        input_5= input_5%10;   //4

        input_6= input/100000;  //3
     
        sum=input_1+input_2+input_3+input_4+input_5+input_6;
    
        cout<<"Sum of 6 digits is: "<<sum<<endl;

    }

    return 0;
}