#include<iostream>
using namespace std;

int EmployeeRecord(long int[]);
int main(){

	long int empld[7]={5658845,4520125,7895122,8777541,8451277,1302850,7580489};
	
	EmployeeRecord(empld);

	system("pause");
	return 0;
}

int EmployeeRecord(long int data[]){
	int hours[7];
	double wages[7];
	double payRate[7];
	double payrate=0.0;
	double grossWage=0.0;


	for(int i=0;i<7;i++){
		cout<<"Please enter number of hours of employee "<<data[i]<<endl;
		cin>>hours[i];
	}

	for(int i=0;i<7;i++){
		while(payrate<15.0){
			cout<<"Please enter payRate of employee "<<data[i]<<endl;
			cin>>payrate;
	    	if(payrate<15.0){
				cout<<"Wrong input. Please enter again."<<endl;
			}
		}
		payRate[i]=payrate;
		payrate=0;
	}

	for(int j=0; j<7;j++){
		grossWage=payRate[j]*hours[j];
		wages[j]=grossWage;
	}
	
	cout<<"Employee Number\t Hours\t PayRate\t Wages"<<endl;
	for(int i=0;i<7;i++){
		cout<<data[i]<<"\t \t"<<hours[i]<<"    \t"<<payRate[i]<<"   \t \t"<<wages[i]<<endl;
	}

	return 0;
}