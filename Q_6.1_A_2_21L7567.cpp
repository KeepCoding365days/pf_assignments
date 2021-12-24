#include <iostream>
using namespace std;

int checkPrime(int);

int main(){
	
	int n=0;
	
	cout<<"Please enter a number to check if it is Prime or not:"<<endl;
	cin>>n;
	
	if(checkPrime(n)){
		cout<<n<<" is a Prime number.";
	}
	
	else{
		cout<<n<<" is not a Prime number.";
	}
}
int checkPrime(int input){			//function to check prime number
		int divider=0;
		
		bool check=1;				//return vaue
		
		for(int i=1;i<input;i++){		//checking for multiples
			if(input%i==0){
				divider++;
			}	
		}
    if(divider>1){			//checking for prime
    	check=0;
	}
	return check;
	}
