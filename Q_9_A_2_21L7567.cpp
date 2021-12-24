#include<iostream>
using namespace std;
int main(){
	int day_birth,month_birth,year_birth=0;		//for birthday
	int day_curr,month_curr,year_curr=0;		//for current date
	int day,month,year=0;  //for age calculation
	char dummy;
	bool date_check=1;		//for date check
	
	cout<<"Please enter your date of birth in DD/MM/YY format:"<<endl;
	cin>>day_birth>>dummy>>month_birth>>dummy>>year_birth;
	
	cout<<"Please enter current date in DD/MM/YY format:"<<endl;
	cin>>day_curr>>dummy>>month_curr>>dummy>>year_curr;
	
	//checking dates

	if(day_birth>31 ||day_birth<0|| month_birth >12|| month_birth<0|| year_birth<0||day_curr>31|| day_curr<0|| month_curr >12|| month_curr<0|| year_curr<0 ||year_curr<year_birth){
		date_check=0;	
		cout<<"Invalid input."<<endl;
			}
	
	if (date_check){			//will work if inputs are vaid
		
		if(day_curr-day_birth<0){
			month_curr=month_curr-1;		// as we will add days of previous month 
			
				//calculating days
			if(month_curr==1||month_curr==3||month_curr==5||month_curr==7||month_curr==8||month_curr==10||month_curr==12){
				day_curr+=31;
				day=day_curr-day_birth;					//for 31 days month
			}
				
				
			else if(month_curr==2){						//for feb
				day_curr+=28;
				day=day_curr-day_birth;
			}
			else  {										//for 30 days month 
				day_curr+=30;
				day=day_curr-day_birth;
				}
			}
		
		else{
			day=day_curr-day_birth;
		}
		
		if(month_curr-month_birth<0){
			month_curr+=12;
			year_curr-=1;
			month=month_curr-month_birth;			
		}
		else {
			month=month_curr-month_birth;
		}
		year=year_curr-year_birth<<year;
		
		cout<<"Your age is: "<<day<<" days, "<<month<<" months and "<<year<<" years.";
	}
	return 0;
	}
	


