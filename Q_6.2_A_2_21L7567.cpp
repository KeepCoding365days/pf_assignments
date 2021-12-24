#include <iostream>
using namespace std;

int checkPrime(int);

int main(){
	
	int input=0;
	
	cout<<"Please enter how many numbers you want to check if they are Prime or not:";
	cin>>input;
	
	checkPrime(input);
	
	return 0;
}
int checkPrime(int count){
		int input=0;
		int divider=0;
		
		cout<<"Please enter numbers:"<<endl;
		
		for(int x=0;x<count;x++){
			
			cin>>input;
			
			divider=0;
			
			for(int i=1;i<input;i++){
				if(input%i==0){
					divider++;
				}	
			}
			
    	if(divider>1){
    		cout<<input<<" is not a Prime number."<<endl;
		}
		
		else{
			cout<<input<<" is a Prime number."<<endl;
		}
	}
	return 0;
	}
