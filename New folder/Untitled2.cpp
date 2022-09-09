#include <iostream>
using namespace std;

int x = 4;
int &Func(){
	static int x = 5;
	return x;
}

int main() {
	cout << x; //4
	cout << Func(); //5
	Func() = 8;
	cout << x; //4
	system("pause");
	return 0;	
}