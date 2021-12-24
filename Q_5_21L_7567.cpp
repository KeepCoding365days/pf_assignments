#include <iostream> //solution of Q5 of assignment 1
using namespace std;
int main(){
    double num_1,num_2,num_3;

    cout<<"Please enter 3 numbers.\n"; //taking inputs
    cout<<"Enter first number:";
    cin>>num_1;

    cout<<"Enter second number:";
    cin>>num_2;

    cout<<"Enter third number:";
    cin>>num_3;

    cout<<"In ascending order:\n";       //printing in ascending order 
    
    if (num_1<num_2 && num_1<num_3){    //nested if statements are used to check the 
        cout<<num_1<<"\n";                    //order of numbers
        if (num_2<num_3){
            cout<<num_2<<"\n"<<num_3<< "\n";}
        else {
            cout<<num_3<<"\n"<<num_2<< "\n";
            }    
        
    }

    else if (num_2<num_1 && num_2<num_3){
            cout<<num_2 << "\n";
            if (num_1<num_3){
                cout<<num_1<<"\n"<<num_3<< "\n";}
            else {
                cout<<num_3<<"\n"<<num_1<< "\n";
            }    
        
    }

    else if (num_3<num_2 && num_3<num_1){
            cout<<num_3 << "\n";
            if (num_1<num_2){
                cout<<num_1<<"\n"<<num_2<< "\n";}
            else {
                cout<<num_2<<"\n"<<num_1<<"\n";
            }    
        
    }
    
    else{
        cout<<num_1<<"\n"<<num_2<<"\n"<<num_3<< "\n";
    }

    cout<<"In descending order:\n";       //printing in ascending order
    
    if (num_1>num_2 && num_1>num_3){    //nested if statements are used to check the
        cout<<num_1<< "\n";                    //order of numbers
        if (num_2>num_3){
            cout<<num_2<<"\n"<<num_3<<"\n";}
        else {
            cout<<num_3<<"\n"<<num_2<<"\n";
            }    
        
    }

    else if (num_2>num_1 && num_2>num_3){
            cout<<num_2<< "\n";
            if (num_1>num_3){
                cout<<num_1<<"\n"<<num_3<< "\n";}
            else {
                cout<<num_3<<"\n"<<num_1<< "\n";
            }    
        
    }

    else if (num_3>num_2 && num_3>num_1){
            cout<<num_3<< "\n";
            if (num_1>num_2){
                cout<<num_1<<"\n"<<num_2<< "\n";}
            else {
                cout<<num_2<<"\n"<<num_1<<"\n";
            }    
        
    }
    
    else{
        cout<<num_1<<"\n"<<num_2<<"\n"<<num_3<<"\n";
    }




    return 0;
}
