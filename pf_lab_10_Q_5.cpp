#include <iostream>
using namespace std;
void vowels(char[]);
void consts(char[]);

int main(){
	
	char arr[100];
	char input=' ';
	
	
	cout<<"Please enter strings:"<<endl;
	cin.getline(arr,100);
	strt:
	cout<<"A) Count the numbers of vowels in string."<<endl;
	cout<<"B) Count the numbers of consonants in string."<<endl;
	cout<<"C) Count the numbers of both vowels and consonants in string."<<endl;
	cout<<"D) Enter another string."<<endl;
	cout<<"E) Exit the Program."<<endl;
	cout<<"Please enter A,B,C,D or E:"<<endl;
	
	cin>>input;

	
	if (input=='A'){
		vowels(arr);
	}
	else if(input=='B'){
		consts(arr);
	}
	
	else if(input=='C'){
		vowels(arr);
		consts(arr);
	}
	
	else if(input=='D'){
		cout<<"Please enter strings"<<endl;
		cin.ignore();
		cin.getline(arr,100);
		
		goto strt;
	}
	else if(input=='E'){
		return 0;
	}
	else{
		cout<<"Wrong Input. Quit";
	}
	
	system("pause");
	return 0;
}

void vowels(char arr[]){
	int count=0;
	int vowel=0;
	for (int i=0;arr[i]!='\0';i++){
		count++;

	}

	for (int i=0;i<count;i++){
		if(arr[i]=='a'|| arr[i]=='A'|| arr[i]=='e'|| arr[i]=='E'|| arr[i]=='i'|| arr[i]=='I'|| arr[i]=='o'|| arr[i]=='O'|| arr[i]=='U'|| arr[i]=='u'){
			vowel++;
		}
	}

	cout<<"The number of vowels in input string is "<<vowel<<"."<<endl;
}

void consts(char arr[]){
	int count=0;
	int conts=0;
	for (int i=0;arr[i]!='\0';i++){
		count++;

	}

	for (int i=0;i<count;i++){
		if(arr[i]!='a'&& arr[i]!='A'&& arr[i]!='e'&& arr[i]!='E'&& arr[i]!='i'&& arr[i]!='I'&& arr[i]!='o'&& arr[i]!='O'&& arr[i]!='U'&& arr[i]!='u'&&arr[i]!=' '){
			conts++;
		}
	}
	
	cout<<"The number of consonants in input string is "<<conts<<"."<<endl;
}
