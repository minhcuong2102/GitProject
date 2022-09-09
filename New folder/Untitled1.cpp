#include <iostream>
using namespace std;

int x = 4;
int &Func(){
	return x;
}

int main() {
	cout << x; //4
	cout << Func(); //4
	Func() = 8; //8
	cout << x;
	system("pause");
	return 0;	
}