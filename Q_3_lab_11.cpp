#include <iostream>
using namespace std;
int size=5;
void input_char(char [][100]);
void input_int(long int[]);
void lookup(char[50],char[5][100],long int[5]);
int main(){
	char name[5][100]={'a'};
	long int numbers[5];
	char target[50];
	
	input_char(name);
	
	input_int(numbers);
	
	cout<<"Please enter a name to find number:"<<endl;
	cin.ignore();
	cin.getline(target,50);
	
	lookup(target,name,numbers);
	
	system("pause");
	return 0;
}

void input_char(char arr[][100]){
	char input[100]={' '};
	for(int i=0;i<5;i++){
	
	cout<<"Please enter name of person "<<i+1<<":"<<endl;

	cin.getline(input,100);

	for(int j=0;input[j]!='\0';j++){
		arr[i][j]=input[j];
	}
	}
	


}

void input_int(long int arr[]){
	for (int i=0;i<5;i++){
		cout<<"Please enter number of person "<<i+1<<":"<<endl;
		cin.ignore();
		cin>>arr[i];
		
		
	}
}

void lookup(char target[50],char name[5][100],long int numbers[5]){
	bool check=1;
	for (int i=0;i<5;i++){
		for(int j=0;target[j]!='\0'&& name[j]!='\0';j++){
			check=1;
			if(name[i][j]!=target[j]){
				check=0;
				break;
			}
		}
		if(check){
			cout<<"The number of "<<target<<" is "<<numbers[i]<<"."<<endl;
			break;
		}
	}
	if (!check){
			cout<<"Number not found."<<endl;
		}
}
