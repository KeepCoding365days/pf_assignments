#include <iostream>
using namespace std;

void hollowTriangle(int);

int main(){
	int n;
	
	cout<<"Please enter a number to draw hollow triangle:"<<endl;
	cin>>n;
	
	hollowTriangle(n);
	
	return 0;
}

void hollowTriangle(int n){
	
	int space_check=n-3; //for printing spaces for hollow triangle.
	

	
		for(int i=0;i<n;i++){		//print first row
		cout<<"*";
	}
		cout<<endl;
		
		for(int h=0;h<n-3;h++){
			cout<<"*";										//to print hollow rows
			for(int space=space_check;space>0;space--){
				cout<<" ";
			}
			cout<<"*"<<endl;
			space_check--;
		}
		
		if(n==2){
			cout<<"*";
		}
		else if(n>1){
		
			for (int end=2;end>0;end--){						//print last 2 rows
				cout<<"*";
			for (int g=end-1;g>0;g--){
				cout<<"*";
			}
			cout<<endl;
		}
	}
}
