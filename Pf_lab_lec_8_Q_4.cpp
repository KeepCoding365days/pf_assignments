#include <iostream>
using namespace std;
int pairFinder(int[],int,int);
int main(){
	int arr[10];
	int N=0;
	
	cout<<"Please enter 10 numbers:"<<endl;
	
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	
	cout<<"Please enter number to find pairs:"<<endl;
	cin>>N;
	
	pairFinder(arr,10,N);
	
	return 0;
}

int pairFinder(int input[],int len,int N){		
	int num_1,num_2,pair_1,pair_2=0;
	bool pair=0;
	

	
	for (int i=0;i<10;i++){
		num_1=input[i];
		
		for (int j=0; j<10;j++){
			num_2=input[j];
			if(num_1!=pair_1 && num_2 != pair_2 && num_1!=pair_2 && num_2 != pair_1){ //to lower the repitition of same pairs.
			
				if(num_1+num_2==N){
					cout<<"Sum of following pair is equal to "<<N<<"."<<endl;
					cout<<num_1<<" , "<<num_2<<endl;
					pair_1=num_1;
					pair_2=num_2;
					pair=1;
				}
			}
		}
	}
	if(!pair){
		cout<<"There is no pair of numbers whos sum is equal to"<<N<<"."<<endl;
	}
	
	return 0;
}
