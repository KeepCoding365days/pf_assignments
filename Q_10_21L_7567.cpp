#include <iostream> //solution of Q10 of assignment 1. A sample calculator
using namespace std;
int main(){
    double num_1,num_2=0.0; //for input
    int num_3,num_4=0;      //for %
    float cal=0.0;          //to store after cal 
    char oper;              //to input operator 

    cout<<"Please enter 2 numbers and operator (+,-,*,/,%) to calculate.\n";
    
    cout<<"Enter first number: ";
    cin>>num_1;
    
    cout<<"Enter second number: ";
    cin>>num_2;
    
    cout<<"Enter operator: ";
    cin>>oper;

    num_3=num_1;
    num_4=num_2;
    
    if (oper=='+'){             //for +
        cal=num_1+num_2;
        cout<<num_1<<" + "<<num_2<< "= "<<cal;
    }
    
    else if (oper=='-'){        //for -
            cal=num_1-num_2;
            cout<<num_1<<" - "<<num_2<< "= "<<cal;
        }

    else if (oper=='*'){        //for *
            cal=num_1*num_2;
            cout<<num_1<<" * "<<num_2<< "= "<<cal;
        }

    else if (oper=='/'){        //for /
            cal=num_1/num_2;
            cout<<num_1<<" / "<<num_2<< "= "<<cal;
        }

    else if (oper=='%'){        //for %
            cal=num_3%num_4;
            cout<<num_3<<" % "<<num_4<< "= "<<cal;
        }
    
    else{
        cout<<"Invalid Input.";
    }


    return 0;
}