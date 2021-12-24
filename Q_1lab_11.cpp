#include <iostream>
using namespace std;
int const size=5;
int avg(int [][size]);
void minim(int [][size]);
void maxim(int [][size]);
void input(int [][size]);
int main(){
	int arr[3][size];
	float mean=0.0;
	input(arr);
	mean=avg(arr);
	cout<<"Average pounds of food eaten by monkey family on one day is "<<mean<<"."<<endl;

	maxim(arr);
	minim(arr);
	system("pause");
	return 0;
}
void input (int input[][size]){
	int enter=0;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			start:
			cout<<"Please enter pounds of food eaten by monkey number: "<<i+1<<" on day "<<j+1<<endl;
			cin>>enter;
			if (enter<0){
				cout<<"Invalid Input"<<endl;
				goto start;
			}
			input[i][j]=enter;
		}
	}
}

int avg(int arr[][size]){
 int sum=0;
 double avg=0.0;
 for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			
			sum+=arr[i][j];
		}
	}
	avg=sum/5.0;
	return avg;
}
void minim( int arr[][size]){
	double min=arr[0][0];
	int row=0,col=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			if(arr[i][j]<min){
				min=arr[i][j];
				row=i;
				col=j;
			}
		}
	}

	cout<<"Minimum food eaten by a monkey is "<<min<<" on day "<<col+1<<" by monkey "<<row+1<<"."<<endl;
}

void maxim( int arr[][size]){
	double max=arr[0][0];
	int row=0,col=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
				row=i;
				col=j;
			}
		}
	}
	cout<<"Maximum food eaten by a monkey is "<<max<<" on day "<<col+1<<" by monkey "<<row+1<<"."<<endl;
}
