#include <iostream>
using namespace std;
void swapFrontBack(int [], int);

int main(){
	int size=0;
	int input=0;
	int arr[100];
	cout<<"Please enter elements of array. Enter -1 to quit:"<<endl;
	
	while(input!=-1){
		cin>>input;
		if(input!=-1){
			arr[size]=input;
			size++;
		}	
	}
	if(size>1){
	cout<<"Before swap:"<<endl;
	
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
	
	cout<<"After swap:"<<endl;
	
	swapFrontBack(arr,size);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
}
	else{
		cout<<"Please enter atleast 2 elements to swap."<<endl;
	}
	
	system("pause");
	return 0;
}

void swapFrontBack(int agg[],int size){			//swapping
	if (size>1){								//checking
	agg[0]=agg[0]+agg[size-1];
	agg[size-1]=agg[0]-agg[size-1];
	agg[0]=agg[0]-agg[size-1];
	}
}
