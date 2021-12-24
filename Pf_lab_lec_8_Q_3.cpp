#include <iostream>
using namespace std;

int unique_elements(int[],int);

int main(){
	int input[10];
	cout<<"Please enter 10 numbers: "<<endl;
	for (int i; i<10 ;i++){
		cin>>input[i];
	}
	unique_elements(input,10);
	return 0;
}

int unique_elements(int input[],int siz ){
	int unique=0;
	int size=0;
	int uni[size];
	int index;
	
	for(int i=0;i<10;i++){
		unique=0;
		for (int check=0;check<10;check++){
			
			if (input[i] ==input[check]){
				unique++;
			} 
		}
		
		if (unique==1){
			size++;
			index=size-1;
			uni[index]=input[i];
			}
		}
		
		cout<<"Following are the unique numbers:"<<endl;
		
		for(int i=0;i<size;i++){
		
		cout<<uni[i]<<endl;
	}
	return 0;
	
}
