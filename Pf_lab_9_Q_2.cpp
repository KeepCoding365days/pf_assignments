#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void lottery(int [], int[]);

int main(){
	int input[5];
	int lotter[5];

	srand(time(0));

	for(int i=0;i<5;i++){
		lotter[i]=(rand()%10);
	}
	cout<<"Please enter 5 numbers:"<<endl;
	for(int i=0;i<5;i++){
		cin>>input[i];
	}

	lottery(input,lotter);
	system("pause");
	return 0;
}

void lottery(int input[5],int lotter[5]){
	int match=0;
	cout<<"Input array:"<<endl;
	for(int i=0;i<5;i++){
		cout<<input[i]<<"\t";
	}
	cout<<endl;

	cout<<"Random array:"<<endl;
	for(int i=0;i<5;i++){
		cout<<lotter[i]<<"\t";
	}
	cout<<endl;

	for(int i=0;i<5;i++){
		if(input[i]==lotter[i]){
			match++;
		}
	}
	if(match==5){
		cout<<"You are a grand prize winner"<<endl;
	}
	else{
		cout<<"You had "<<match<<" correct guesses."<<endl;
	}
}

