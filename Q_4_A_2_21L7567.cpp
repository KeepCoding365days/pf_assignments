#include <iostream>
using namespace std;
int main(){
	int input=0;
	bool nottuple=1;
	
	cout<< "Please enter a number:";
	cin>>input;
	
	for(int check=1;check<input;check++){
		
		if ((check*(check-1)*(check-2))==input){ //multiplying consecutive numbers and checking
			cout<<"Multiplication of "<<check-2<<", "<<check-1<<" and "<<check<<" is equal to "<<input<<"."<<endl;
			nottuple=0;
		}
		
	}
	
	if(nottuple){
		cout<<"There are no consecutive 3 numbers whose multiple is equal to "<<input<<"."<<endl;
	}
	
	return 0;
}
