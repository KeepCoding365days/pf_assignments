#include <iostream>
using namespace std;
int main(){
	int input[10];
	int min,max=0;
	
	cout<<"Please enter 10 numbers:"<<endl;
	
	for(int i=0;i<10;i++){
		cin>>input[i];
	}
	
	for (int i=0;i<10;i++){					//finding maximum number
			
		if(input[i]>max){
				
			max=input[i];
				
		}		
	}
	min=max;
		
	for (int i=0;i<10;i++){					//finding minimum number
		
		if(input[i]<min){
				
			min=input[i];
				
		}
	}
	
	cout<<"Maximum number is: "<<max<<" and minimum number is: "<<min<<"."<<endl;
	return 0;
}
