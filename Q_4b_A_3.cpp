#include<iostream>
using namespace std;

int initarr(char[],int); //initializing char array
void move(char[],int); //swapping to make symmetry
void swap(int& ,int&); //swapping
void printarr(char[],int);	//printing array

int main(){
	
	char arr[100];
	int count=0;
	cout<<"Please enter characters of Array to print a segregated array. Enter any negative number to quit:"<<endl;
	
	count=initarr(arr, 100);
	move(arr,count);
	
	cout<<"Seggregated Array:"<<endl;
	printarr(arr,count);
	
	return 0;
	
}

int initarr(char arr[],int size){
	int count=0;
	char input;
	for (int i=0; i<size;i++){
		cin>>input;
		if(input=='-'){
			break;
		}
		else if(input!='a'&& input!='b'&& input!='m'){
			cout<<"Wrong input. Please enter a, b or m."<<endl;
		}
		else{
			arr[count]=input;
			count++;
		}
		
	}
	return count;
}

void move(char arr[], int size){
								//moving every b to lowest index of m
	for(int i=0;i<size;i++){
		if(arr[i]=='b'){
			for(int j=0;j<i;j++){
				if(arr[j]=='m'){
					swap(arr[i],arr[j]);
					break;
				}
			}			
		}
		
		if(arr[i]=='b'){		//moving every b to lowest index of a
			for(int j=0;j<i;j++){
				if(arr[j]=='a'){
					swap(arr[i],arr[j]);
					break;
				}
			}			
		}
						
		if(arr[i]=='m'){		//moving every m to lowest index of a
			for(int j=0;j<i;j++){
				if(arr[j]=='a'){
					swap(arr[i],arr[j]);
					break;
				}
			}			
		}
	}
}

void swap(int& a, int& b){
	int temp=0;
	
	a=temp;
	a=b;
	b=temp;
	
}

void printarr(char arr[], int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<endl;
	}
}


