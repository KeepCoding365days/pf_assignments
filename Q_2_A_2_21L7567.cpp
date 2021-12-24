#include <iostream>
using namespace std;
int main(){
	int x=100,y=0;
																	
	while(x>0){
		cin>>y;
		if(y==25){
			x--;
		}
		else{
			cin>>x;
			cout<<"x = "<<x<<endl;
		}
	}
	return 0;
}
//int x = 100, y;
//while (x > 0) {
//cin >> y;
//if (y == 25) {
//x--;
//continue; }
//cin >> x;
//cout << "x = " << x << endl;
//}
