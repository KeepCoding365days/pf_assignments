#include <iostream>
using namespace std;
int main(){
	int input=1;
	int count,even=0,odd=0;
	
	cout<<"Please enter numbers to check even and odd frequency. Enter -1 to end"<<endl;
	cout<<"Enter numbers:"<<endl;
	
	//count is calculating total numbers, odd calculating odd and even calculating even
	
	for(count=0;input!=-1;count++){ 
		cin>>input;
		
		if(input!=0&&input!=-1&&input%2==0){
			even++;
		}
		else if(input!=0&& input!=-1&&input%2!=0){
			odd++;
		}
		else if(input==0){
			even++;
		}
	}
	cout<<"The frequency of even numbers is "<<even<<" in total "<<count-1<<" numbers."<<endl;
	cout<<"The frequency of odd numbers is "<<odd<<" in total "<<count-1<<" numbers."<<endl;
	return 0;
	
}
