#include <iostream>
using namespace std;

int main() {
	int x = 3, y = 4;
	const int *p = &x;
//	cout << *p;
//	*p = 5;
	p = &y;
	cout << *p;
	
	int* const q = &x;
	*q = 10;
	cout << *q;	
//	q = &y;

	return 0;	
}