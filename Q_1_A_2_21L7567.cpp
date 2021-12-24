/*int i = 0;
top: if (i >= 10)
goto end;
cout << i << endl;
i++;
goto top;
end:*/
#include <iostream>
using namespace std;
int main(){
	int i=0;
	while(i<10){
		cout<<i<<endl;
		i++;
	}
	system("pause");
	return 0;
}
