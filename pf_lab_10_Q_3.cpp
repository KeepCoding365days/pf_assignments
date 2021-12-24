#include <iostream>
using namespace std;
int words(char[]);

int main(){
	char arr[200];
	int word=0;
	cout<<"Please enter a sentence to calculate number of words in it:"<<endl;
	cin.getline(arr,200);
	word=words(arr);
	cout<<"Total number of words in sentence is "<<word<<"."<<endl;
	system("pause");
	return 0;

}

int words(char arr[]){
	int count=0;
	int word=0;
	for(int i=0;arr[i]!='\0';i++){
		count++;
	}
	for(int i=0; i<count;i++){
		if(arr[i]==' '){
			word++;
		}
	}
	word+=1;

	return word;
}
