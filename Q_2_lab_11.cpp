#include<iostream>
using namespace std;
int const size=30;
void input(char[][size]);
void report(char [][size]);
int main(){
	char arr[2][size];
	cout<<"Enter 'R' for rainy, 'S' for sunny, and 'C' for a cloudy day."<<endl;
	input(arr);
	report(arr);
	system("pause");
	return 0;
		
}

void input(char input [][size]){
	char enter=' ';
	for(int i=0;i<3;i++){
		if(i==0){
			cout<<"Enter data of June:"<<endl;	
		}
		else if(i==1){
			cout<<"Enter data of July:"<<endl;	
		}
		else{
			cout<<"Enter data of August:"<<endl;	
		}
		for(int j=0;j<30;j++){
			a:
			cin>>enter;
			if(enter!='R'&&enter!='S'&&enter!='C'){
				cout<<"Invalid input. Please enter again."<<endl;
				goto a;
			}
			else{
			input[i][j]=enter;
			}
		}	
	}
}

void report(char arr[][size]){
	int rain_jun=0,rain_jul=0,rain_aug=0;
	int sunn_jun=0,sunn_jul=0,sunn_aug=0;
	int cloud_jun=0,cloud_jul=0,cloud_aug=0;
	int rain=0,sunn=0,cloud=0;

	for(int i=0;i<3;i++){
		for(int j=0;j<30;j++){
			if(i==0){
				if(arr[i][j]=='R'){
					rain_jun++;
				}
				else if(arr[i][j]=='S'){
					sunn_jun++;
				}
				else if(arr[i][j]=='C'){
					cloud_jun++;
				}
			}
			else if(i==1){
				if(arr[i][j]=='R'){
					rain_jul++;
				}
			    else if(arr[i][j]=='S'){
					sunn_jul++;
				}
				else if(arr[i][j]=='C'){
					cloud_jul++;
				}
			}
			else if(i==2){
				if(arr[i][j]=='R'){
					rain_aug++;
				}
				else if(arr[i][j]=='S'){
					sunn_aug++;
				}
				else if(arr[i][j]=='C'){
					cloud_aug++;
				}
			}
		}
	
	}
	rain=rain_aug+rain_jul+rain_jun;
	sunn=sunn_aug+sunn_jul+sunn_jun;
	cloud=cloud_aug+cloud_jul+cloud_jun;

	cout<<"Total rainy days in 3 months are "<<rain<<"."<<endl;
	cout<<"Total sunny days in 3 months are "<<sunn<<"."<<endl;
	cout<<"Total cloudy days in 3 months are "<<cloud<<"."<<endl;


	cout<<"Total rainy days in June are "<<rain_jun<<"."<<endl;
	cout<<"Total sunny days in June are "<<sunn_jun<<"."<<endl;
	cout<<"Total cloudy days in June are "<<cloud_jun<<"."<<endl;


	cout<<"Total rainy days in July are "<<rain_jul<<"."<<endl;
	cout<<"Total sunny days in July are "<<sunn_jul<<"."<<endl;
	cout<<"Total cloudy days in July are "<<cloud_jul<<"."<<endl;


	cout<<"Total rainy days in August are "<<rain_aug<<"."<<endl;
	cout<<"Total sunny days in August are "<<sunn_aug<<"."<<endl;
	cout<<"Total cloudy days in August are "<<cloud_aug<<"."<<endl;

	if(rain_aug>rain_jun && rain_aug>rain_jul){
		cout<<"August has most rainy days which are "<<rain_aug<<"."<<endl;
	}
	else if(rain_jul>rain_jun && rain_jul>rain_aug){
		cout<<"July has most rainy days which are "<<rain_jul<<"."<<endl;
	}
	else if(rain_jun>rain_aug && rain_jun>rain_jul){
		cout<<"June has most rainy days which are "<<rain_jun<<"."<<endl;
	}
	else if (rain_aug>=rain_jun && rain_aug>rain_jul){
		cout<<"August and June has most rainy days which are "<<rain_aug<<"."<<endl;
	}
	else if (rain_aug>rain_jun && rain_aug>=rain_jul){
		cout<<"August and July has most rainy days which are "<<rain_aug<<"."<<endl;
	}
	else if (rain_jul>=rain_jun && rain_jul>rain_aug){
		cout<<"June and July has most rainy days which are "<<rain_jun<<"."<<endl;
	}
	else{
		cout<<"July, August, and June have same number of rainy days."<<endl;
	}
}
