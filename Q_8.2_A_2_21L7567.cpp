#include<iostream>
using namespace std;

int printFibonacci(int);

int main(){
	
	int input=0;
	
	cout<<"Please enter limit of fibonacci series:";
	cin>>input;
	
	cout<<"Fibonacci series whose term does not exceed "<<input<<" is:"<<endl;
	printFibonacci(input);
	
	return 0;
}


int printFibonacci(int T){
	
	int t1=0, t2=1,next,i=0;
	
	cout<<t1<<endl<<t2<<endl;  	//printing 0 and 1
	
	next=t1+t2;
	
	while(next<T){			//printng terms less than T
		
		cout<<next<<endl;
		
		t1=t2;
		t2=next;
		next=t1+t2;			//Adding previous 2 terms to calculate next termn
	
		i++;
	}
	return 0;
}
