#include <iostream>
using namespace std;

int main() {
	int x = 2;
	int *p = &x;
	cout << "x = " << x << ", *p = " << *p << endl;
	cout << "&x = " << &x << ", p = " << p << ", &p = " << &p << endl;
	int *p1;
	cout << "*p1 = " << *p1 << ", p1 = " << p1 << endl;
	return 0;	
}