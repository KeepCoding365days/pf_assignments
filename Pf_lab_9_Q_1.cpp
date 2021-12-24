#include <iostream>
using namespace std;

bool firstLast2(int[],int);

int main(){
	int input=0,size=0;
	int arr[100];
	cout<<"Please menter elements of array. Enter -1 to quit:"<<endl;
	while(input!=-1){
		cin>>input;
		if(input!=-1){
			arr[size]=input;
			size++;
		}
	}
	if (firstLast2(arr,size)){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}
	system("pause");
	return 0;
}

bool firstLast2(int arr[], int size){

	bool check=0;

	if(arr[0]==2|| arr[size-1]==2){
		check =1;
	}

	return check;
}