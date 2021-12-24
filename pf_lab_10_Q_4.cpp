#include <iostream>
using namespace std;
void words(char[]);

int main(){
	char arr[200];
	cout<<"Please enter a sentence to calculate number of words and average letters\nper word in it:"<<endl;
	cin.getline(arr,200);
	words(arr);

	system("pause");
	return 0;

}

void words(char arr[]){
	int count=0;
	int word=0;
	double num=0;
	double avg=0;
	for(int i=0;arr[i]!='\0';i++){
		count++;
	}
	for(int i=0; i<count;i++){
		if(arr[i]==' '){
			word++;
		}
		else{
			num++;
		}
	}

	cout<<"Total number of words in sentence is "<<word+1<<"."<<endl;
	avg=num/(word+1);
	cout<<"Average number of letters in a word is "<<avg<<"."<<endl;
}
