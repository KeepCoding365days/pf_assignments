#include<iostream>
using namespace std;
int main(){
	int next=0,t1=0,t2=1,sum=0;
	
		while(next<4000000){  //calculating all fibonacci values under four million
		
			t1=t2;
			t2=next;
			next=t1+t2;
			if (next<=4000000 && next%2==0){			//taking sum of even fibonacci values under 4 million
				sum+=next;
			}
			
		}
	cout<<"The sum of all even values of fibonacci series under 4 million is "<<sum<<"."<<endl;
	
		return 0;
}
