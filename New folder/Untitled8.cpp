#include <iostream>
using namespace std;
int& Func(){
	int x = 3;
	return x;
}

int main() {
	int* p = &Func();
	cout << *p << endl;	
	cout << *p;
	return 0;	
}