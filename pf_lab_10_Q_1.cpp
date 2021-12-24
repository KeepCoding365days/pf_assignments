#include <iostream>
using namespace std;
int len(char[],int);
int main(){

	int size=100;
	char arr[100];
	int count =0;  

	cout<<"Please enter any string to calculate its length:"<<endl;
	cin.getline(arr,size);

	count=len(arr,size);
	
	cout<<"Length of string is "<<count<<"."<<endl;
	system("pause");

	return 0;
}

int len(char arr[],int size){
	
	int count=0;

	for (int i=0;i<100;i++){
		if(arr[i]!='\0'){
		count++;
		}
		else{
		break;
		}
	}

	return count;
}
