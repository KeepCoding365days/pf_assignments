#include <iostream>
using namespace std;
bool Exists(int data[][6],int pattern[][3]);
int main(){
	int data[][6]={{1,2,7,8,9,6},{2,2,3,4,5,6},{3,2,3,4,5,6},{4,2,3,4,5,6},{5,2,9,8,7,6},{6,2,7,4,5,6}};
	int pattern[][3]={{3,4,5},{3,4,5},{3,4,5}};;
	
	bool check=0;
	
	check=Exists(data,pattern);
	if(check){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}
}
bool Exists(int data[][6],int pattern[][3]){
	bool check=0;
	int count=0;
	for(int i=0;i<=3;i++){	//0 0 0 0 
		for(int j=0;j<=3;j++){
			count=0;
			for(int k=i;k<=i+2;k++){
				
				for(int col=j;col<=j+2;col++){
					check=0;
					
					if(pattern[k-i][col-j]==data[k][col]){
						count++;	
					}
				}
			}
			
		if(count ==9){
			check=1;
			return check;
		}
		}
	}
	return check;
}
