#include<iostream>
using namespace std;
int main(){
	int sum=0;
	
	for(int i=501;i<=3000;i++){			//checking numbers greater than 500 and less than 3000.		
	
	    if(i%3==0 && i%5!=0){			//adding numbers divisible by 3 but not 5
			sum+=i;
		}
		
		else if(i%3!=0 && i%5==0){		//adding numbers divisible by 5 but not 3
			sum+=i;
		}
	}
	cout<<"Sum of all the natural numbers between 500 and 3000 which are multiple of either 5 or\n3 but not both is "<<sum<<"."<<endl;
}
