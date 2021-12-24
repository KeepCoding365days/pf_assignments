#include <iostream>
using namespace std;
int total_salary_calc(int& ,int&);

int main(){
	int total_salary,salary,grade=0;
	
	cout<<"Please enter your salary: ";
	cin>> salary;
	
	cout<<"Please enter your grade: ";
	cin>> grade;
	
	total_salary=total_salary_calc(salary,grade);
	
	cout<<"Your total salary is "<< total_salary<<".";
	
	system("pause");
	return 0;
}
int total_salary_calc(int & salary,int & grade){
	
	int bonus=0;
	
	if (grade>15){
		
		bonus=0.5*salary;
		
		salary+=bonus;
	}
	else{
		bonus=0.25*salary;
		salary+=bonus;
	}
	return (salary);
}
