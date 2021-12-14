#include<iostream>
using namespace std;

bool isPrime(int);		//to check prime
int initArray(int[],int);		//to initialize array
void primeFreq(int [], int,int,int); //to print prime freqs
bool noRepet(int[],int,int,int);  //to check if number has freq more than one to avoid repitition in printing.

int main(){
int size,start,end=0;

int arr[100];

size=initArray(arr,100);

cout<<"Please enter range starting index:"<<endl;
cin>>start;

cout<<"Please enter range ending index:"<<endl;
cin>>end;

if(end>size){
	end=size-1;
}
if(start<0){
	start=0;
}

primeFreq(arr,size,start,end);
return 0;
}

void primeFreq(int arr[],int size,int start,int end){
	
	int freq=0;
	int number=0;
	
	for(int i=start;i<=end;i++){
		freq=0;
		
		for(int j=start;j<=end;j++){
		
			if(arr[j]==arr[i]){
				freq++;						//calculating frequency on each index 
			}
		}
		number=arr[i];
		if(freq>1 && isPrime(freq)&& noRepet(arr,end,start,i) ){	//checking if freq is prime and freq of same numbers does not print more than once
	
			cout<<"Prime frequency of "<<arr[i]<<" is "<<freq<<"."<<endl;
		}
	}
}

int initArray(int arr[],int len){
	
	int size,input=0;
	
	cout<<"Please enter number of arrays. Enter -1 to quit:"<<endl;

	for(int i=0;i<len;i++){
		arr[i]=0;
	}
	
	while(input!=-1){
		cin>>input;
		if(input!=-1){
			arr[size]=input;
			size++;
		}
	}
	return size;
}

bool isPrime(int number){
	int check=0;
	bool bol=0;
	
	for(int i=1;i<number;i++){
	
		if(number%i==0){
			check++;
		}
	}
	if (check<=1){
		bol=1;
	}
	return bol;
}

bool noRepet(int arr[],int size,int start, int idx){
	bool check=1;
	if(idx!=0){
		for(int j=idx-1; j>=start;j--){ //to check if freq of particular nmbr has been already calculated.
			if (arr[j]==arr[idx]){
				check=0;
			}
		}
	}
	return check;
}
