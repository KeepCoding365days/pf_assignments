#include <iostream>
using namespace std;
int main(){
	int input=0;
	cout<<"Please enter a number to print triangle:";
	cin>>input;
	for(int i=0;i<input;i++){			//for upper portion
		for(int prnt =0; prnt<=i;prnt++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i=input-1;i>=0;i--){		//for lower portion
		for(int prn =0; prn<i;prn++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
	}
