#include<iostream>
using namespace std;

int initarr(int[],int);	//initializing array
void move(int[],int);	//swapping to make symmetry
void swap(int& ,int&);	//swapping
void printarr(int[],int); //printing array

int main(){
	int arr[100];
	int count=0;
	cout<<"Please enter elements of Array. Enter only 0 and 1. Enter -1 to quit:"<<endl;
	
	count=initarr(arr, 100);
	move(arr,count);
	
	cout<<"Seggregated Array:"<<endl;
	printarr(arr,count);
	
	return 0;
	
}
int initarr(int arr[],int size){
	int count=0,input=0;
	for (int i=0; i<size;i++){
		cin>>input;
		if(input==-1){
			break;
		}
		else if(input!=0 &&input!=1){
			cout<<"Wrong input. Please enter 0 and 1 only."<<endl;
		}
		else{
			arr[count]=input;
			count++;
		}
	}
	return count;
}

void move(int arr[], int size){
								//moving every 0 to lowest index of 1
	for(int i=0;i<size;i++){
		if(arr[i]==0){
			for(int j=0;j<i;j++){
				if(arr[j]==1){
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

void printarr(int arr[], int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<endl;
	}
}


