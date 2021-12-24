#include <iostream>
using namespace std;

int printFibonacci(int,int);

int main(){
	
	int strt,end=0;
	
	cout<<"Please enter limits of fibonacci series."<<endl;
	
	cout<<"Please enter first term:"<<endl;
	cin>>strt;
	
	cout<<"Please enter last term:"<<endl;
	cin>>end;
	
	cout<<"Fibonacci series between "<<strt<<" and "<<end<< " is:"<<endl;
	
	printFibonacci(strt,end);
}


int printFibonacci(int start,int last){
	
	int t1=0,t2=1,next=0;
	
	if(start==0){				//printing zero
		
			cout<<0<<endl<<1<<endl;
		}
	while(next<=last){        
		
		next=t1+t2;					//calculating fibonacci value
		t1=t2;
		t2=next;
		
		if(next>=start && next<=last){		//printing fibonacci series between limits
			cout<<next<<endl;
		}
	}
	return 0;
}
