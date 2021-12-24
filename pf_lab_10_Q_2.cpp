#include<iostream>
using namespace std;
void backward(char[]);
int main(){
	char arr[100];
	cout<<"Please enter a string:"<<endl;
	cin.getline(arr,100);

	backward(arr);
	cout<<"The string in backword form is:"<<endl;

	for(int i=0; arr[i]!='\0';i++){
		cout<<arr[i];
	}
	cout<<endl;
	system("pause");
	return 0;
}

void backward(char arr[]){
	int count=0;
	int temp=0;
	for(int i=0 ;arr[i]!='\0';i++){
		count++;
	}
	for(int i=0;i<((count-1)/2);i++){
		temp=arr[count-i-1];
		arr[count-i-1]=arr[i];
		arr[i]=temp;	
	}
}
