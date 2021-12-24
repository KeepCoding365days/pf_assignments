#include<iostream>
using namespace std;
int main(){
	
	int t1=0, t2=1,next,input,i,count=0;
	char dummy;
	
	t1=t2;
	
	cout<<"How many Fibonacci numbers you want to check:"<<endl;
	cin>>count;
	
	for(int check=1;check<=count;check++){
		
		cout<<"Which Fibonacci you want to check:"<<endl;
		cin>>dummy>>input;
		
		while(i<input-2){			//calculating fibonnaci term.
		
			t1=t2;
			t2=next;
			next=t1+t2;
			i++;
		}
	
	cout<<next<<endl;
}

	return 0;
}
