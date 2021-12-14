#include <iostream>

using namespace std;
void findtriplet(int[],int,int);

int main(){
	int N=10; //array size
	int num=0;//input number 
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	
	cout<<"Please enter an integer Number to find triplets:"<<endl;
	cin>>num;
	
	findtriplet(arr,N,num);
	return 0;
}
void findtriplet(int agg[],int size,int number){
	bool triplet=0;
	
	
	for(int i=0;i<10 ;i++){
	
		for (int j=i+1; j<10;j++){
	
			for(int k=j+1; k<10; k++){		//used i+1 otherwise it will keep printing same numbers again & again.
	
				if((agg[i]+agg[j]+agg[k]==number)&&(i!=j&&j!=k&&i!=k)){
	
					cout<<"Sum of "<<agg[i]<<", "<<agg[j]<<", and "<<agg[k]<<" is equal to "<<number<<"."<<endl;
	
					triplet=1;
				}
			}
		}
	}
	if(!triplet){
		cout<<"There are no 3 numbers in array whose sum is equal to "<<number<<"."<<endl;
	}
}





