#include <iostream> //solution of Q#3 of assignment#1
using namespace std;
int main(){

    int roll_1,roll_2,roll_3,roll_4,roll_5=0;  //for roll no
    int c1,c2,c3,c4,c5=0;     //for marks in each subject overwriting is done to save memory that might take more memory
    int sum_1,sum_2,sum_3,sum_4,sum_5; //to calculate sum of numbers in each subject

//else if not used bcz there is a possibility sum of numbers of 2 students could be equal

    cout<<"Enter number of 5 students in each of 5 subjects to calculate highest aggregate. \n";

    cout<<"Enter RollNumber of first student: ";
    cin>>roll_1;

    cout<<"Enter numbers of first sudent in each of 5 subjects. \n";
    cout<<"Enter numbers in first subject: ";
    cin>>c1;
    cout<<"Enter numbers in second subject: ";
    cin>>c2;
    cout<<"Enter numbers in third subject: ";
    cin>>c3;
    cout<<"Enter numbers in fourth subject: ";
    cin>>c4;
    cout<<"Enter numbers in fifth subject: ";
    cin>>c5;

    sum_1=c1+c2+c3+c4+c5;

    cout<<endl;
    cout<<"Enter RollNumber of second student: ";
    cin>>roll_2;

    cout<<"Enter numbers of second sudent in each of 5 subjects. \n";
    cout<<"Enter numbers in first subject: ";
    cin>>c1;
    cout<<"Enter numbers in second subject: ";
    cin>>c2;
    cout<<"Enter numbers in third subject: ";
    cin>>c3;
    cout<<"Enter numbers in fourth subject: ";
    cin>>c4;
    cout<<"Enter numbers in fifth subject: ";
    cin>>c5;

    sum_2=c1+c2+c3+c4+c5;

    cout<<endl;
    cout<<"Enter RollNumber of third student: ";
    cin>>roll_3;

    cout<<"Enter numbers of third sudent in each of 5 subjects. \n";
    cout<<"Enter numbers in first subject: ";
    cin>>c1;
    cout<<"Enter numbers in second subject: ";
    cin>>c2;
    cout<<"Enter numbers in third subject: ";
    cin>>c3;
    cout<<"Enter numbers in fourth subject: ";
    cin>>c4;
    cout<<"Enter numbers in fifth subject: ";
    cin>>c5;

    sum_3=c1+c2+c3+c4+c5;

    cout<<endl;
    cout<<"Enter RollNumber of fourth student: ";
    cin>>roll_4;

    cout<<"Enter numbers of fourth sudent in each of 5 subjects. \n";
    cout<<"Enter numbers in first subject: ";
    cin>>c1;
    cout<<"Enter numbers in second subject: ";
    cin>>c2;
    cout<<"Enter numbers in third subject: ";
    cin>>c3;
    cout<<"Enter numbers in fourth subject: ";
    cin>>c4;
    cout<<"Enter numbers in fifth subject: ";
    cin>>c5;

    sum_4=c1+c2+c3+c4+c5;

    cout<<endl;
    cout<<"Enter RollNumber of fifth student: ";
    cin>>roll_5;

    cout<<"Enter numbers of fifth sudent in each of 5 subjects. \n";
    cout<<"Enter numbers in first subject: ";
    cin>>c1;
    cout<<"Enter numbers in second subject: ";
    cin>>c2;
    cout<<"Enter numbers in third subject: ";
    cin>>c3;
    cout<<"Enter numbers in fourth subject: ";
    cin>>c4;
    cout<<"Enter numbers in fifth subject: ";
    cin>>c5;

    sum_5=c1+c2+c3+c4+c5;

    if (sum_1>=sum_2 && sum_1>=sum_3 && sum_1>=sum_4 && sum_1>=sum_5){
        cout<<"Student with roll number: "<<roll_1<< " has highest aggregate.";

    }

    if (sum_2>=sum_1 && sum_2>=sum_3 && sum_2>=sum_4 && sum_2>=sum_5){
        cout<<"Student with roll number: "<<roll_2<< " has highest aggregate.";

    }

    if (sum_3>=sum_1 && sum_3>=sum_2 && sum_3>=sum_4 && sum_5>=sum_5){
        cout<<"Student with roll number: "<<roll_4<< " has highest aggregate.";

    }

    if (sum_4>=sum_1 && sum_4>=sum_2 && sum_4>=sum_3 && sum_4>=sum_5){
        cout<<"Student with roll number: "<<roll_4<< " has highest aggregate.";

    }

    if (sum_5>=sum_1 && sum_5>=sum_2 && sum_5>=sum_3 && sum_5>=sum_4){
        cout<<"Student with roll number: "<<roll_5<< " has highest aggregate.";

    } 

    return 0;
}