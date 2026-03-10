#include <iostream>
using namespace std; 
int main(){
	int n; 
	cin >> n;
	if(n>=85){
		cout<<"Gioi";
	}
	else if (n>=70){
		cout<<"Kha";
	} 
	else if (n>=50){
		cout<<"Trung binh";
	}
	else{
		cout<<"Yeu";
	}
	return 0;
}
