#include <iostream>         //solution of Q9 of assignment1
using namespace std;
int main(){
    cout<<"Please enter a single chracter to check if it is an alphabet, digit or special character: ";
    char input;
    int check;

    cin>>input;
    check=int(input);       //finding ascii value of input

    if (check>=65 && check<=90){
        cout<<input<<" is a capital alphabet.";
    }
    else if (check>=97 && check<=122){
        cout<<input<<" is a small alphabet.";
    }

    else if (check>=48 && check<=57){
        cout<<input<<" is a number.";
    }
    else{
        cout<<input<<" is a special character.";
    }


    return 0;
}