#include <iostream>
using namespace std;
int distinctarr(int [] ,int ); //store and print distinct array
int initarr(int [],int ); //initialize an array
void printarr(int[], int); //print array
void incrsort(int[],int); //ascending sort
void decrsort(int[],int); //descending sort
void finduni(int[],int); //find and print uniq elements array

int main(){
	int size=0;
	int arr[20];
	for (int i=0; i<20; i++){		//to avoid storing of trash
		arr[i]=0;
	}
	size=initarr(arr,20);
	distinctarr(arr,size);
	finduni(arr,size);
	
	return 0;
}

int initarr(int arr[],int size){
	int input=0;
	int count;
	cout<<"Please enter 20 elements of array. Enter -99 to quit earlier:"<<endl;
	for (int i=0; i<size;i++){
		cin>>input;
		if(input!=-99){
			arr[i]=input;
			count++;
		}
		else{
			break;
		}
	}
	return count;
}

int distinctarr(int arr[], int size){

	bool check=1;	//to find distinct nmbrs
	int dist[20];
	int count=0;		//size of distinct array
	
	for(int i=0;i<size;i++){
		check=1;
		
		for(int j=0; j<i;j++){
			if (arr[i]==arr[j] && i!=j){
				check= 0;
			}	
		}
		if(check){
			dist[count]=arr[i];
			count++;
		}
	}
	incrsort(dist,count);
	
	cout<<"Distinct elements are:"<<endl;

	printarr(dist,count);
	
	return 0;
}

void printarr(int arr[], int size){
	for(int i=0;i<size;i++){   
		cout<<arr[i]<<endl;
	}
}

void incrsort(int arr[], int size){
	
	int temp=0;
	
	for(int i=0; i<size;i++){
		
		for(int j=i; j<size;j++){
			
			if (arr[i]>arr[j]){
				
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
}

void decrsort(int arr[], int size){
	
	int temp=0;
	
	for(int i=0; i<size;i++){
		for(int j=i; j<size;j++){
			if (arr[i]<arr[j]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
}


void finduni(int arr[],int size){
	int uni[20];
	bool uniq=1;
	int count=0;	//size of uniq array
	
	for(int i=0;i<size;i++){				//checking unique nmbrs
		uniq=1;
		for(int j=0; j<size;j++){
			if(arr[i]==arr[j]&& i!=j){
				uniq=0;
			}
		}
		if(uniq){							//inserting unique nmbrs to array
			uni[count]=arr[i];
			count++;
		}
	}
	if(count==0){
		cout<<"There is no unique element."<<endl;
	}
	
	else{
	
	decrsort(uni,count);
	
	cout<<"Unique elements of array are:"<<endl;
	}
	printarr(uni,count);
}
